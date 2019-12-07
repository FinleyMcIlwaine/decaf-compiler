/*
 * SymbolTable.cpp
 * Finley McIlwaine
 * Dec. 17, 2019
 * COSC4785, Program 6
 *
 * Definition of Symbol Table class member functions
 */

#include "Symbol.hpp"
#include "SymbolTable.hpp"

SymbolTable::SymbolTable(SymbolTable* p)
{
  this->clear();
  this->withParent(p);
}
SymbolTable::~SymbolTable()
{
  clear();
}

SymbolTable::SymbolTable()
{
  this->clear();
}

SymbolTable* SymbolTable::clear()
{
  for (auto& entry : table)
  {
    for (auto& s : entry.second) delete s;
    entry.second.clear();
  }
  table.clear();
  for(auto& c : children)
  {
    delete c;
  }
  children.clear();
  printOrder.clear();
  parent=nullptr;
  depth=-1;
  return this;
}

SymbolTable* SymbolTable::withParent(SymbolTable* p)
{
  parent=p;
  if (parent==nullptr) depth=0;
  else depth=parent->getDepth()+1;
  return this;
}

vector<Symbol*> SymbolTable::lookup(string name)
{
  // Needs to be very beefed up to handle things 
  // like x.f(y) and so on. Should return some
  // value indicating whether it is an l-value or
  // and r-value
  // Will take care of this on next assignment
  try {
    return table.at(name);
  } catch (...) {
    return {}; // Empty vector
  }
}

int SymbolTable::insert(Symbol* s)
{
  // If it's a block get the heck out of here
  if (s->getSymType()=="block_type")
  {
    printOrder.push_back(s);
    return 0;
  }

  try {
    vector<Symbol*> matches = table.at(s->getName());
    // Assuming we still want to keep track of this symbol
    // and print it
    matches.push_back(s);
    printOrder.push_back(s);
    for (auto& symMatch : matches)
    { 
      if ((s->getSymType()=="method_type" || 
            s->getSymType()=="constructor_type") && 
          (symMatch->getSymType()==s->getSymType()))
      {
        MethodSymbol* mSym=(MethodSymbol*)s;
        MethodSymbol* tSym=(MethodSymbol*)symMatch;

        // Both are methods of some type. Need to have dif type/num of args.
        // Cannot just have different return type.
        if (mSym->getNumArgs()!=tSym->getNumArgs())
        {
          return 0;
        }
        // Have same num args, must be different types
        else if (mSym->getArgTypesString()!=tSym->getArgTypesString())
        {
          return 0;
        }
        // Have same num and type of args, figure out which error this is.
        else if (mSym->getBaseTypeString()!=tSym->getBaseTypeString())
        {
          // Means they differ only by return type
          return -1;
        }
        else 
        {
          // Means they are the exact same signature
          return -2;
        }
      }
      // Both are not methods or constructors
      else if ((s->getSymType()=="class_type" &&
            symMatch->getSymType()!="constructor_type") ||
          (symMatch->getSymType()=="class_type" && 
            s->getSymType()!="constructor_type"))
      {
        // Means one of them is class type, cannot be masked (except by ctor)
        return -3;
      }
      else if (s->getSymType()=="var_type" && symMatch->getSymType()=="var_type")
      {
        // Means they are two variables with the same name
        return -4;
      }
      // Add more violations here if they come up
      else
      {
        return 0;
      }
    }
    return 0;
  } catch (...) {
    // No collisions at given name, make new vector and emplace
    vector<Symbol*> symVec = { s };
    table.emplace(s->getName(), symVec);
    printOrder.push_back(s);
    return 0;
  }
}

SymbolTable* SymbolTable::addChild(SymbolTable* child)
{
  child->withParent(this);
  children.push_back(child);
  return child;
}

vector<SymbolTable*> SymbolTable::getChildren()
{
  return children;
}

SymbolTable* SymbolTable::getChild(int i)
{
  if (i<0 || i>children.size())
  {
    return nullptr;
  } else {
    return children.at(i);
  }
}

SymbolTable* SymbolTable::getParent()
{
  return parent;
}

int SymbolTable::getDepth()
{
  return depth;
}

void SymbolTable::print(bool root)
{
  int spaces=depth*2;
  for (auto& sym : printOrder)
  {
    if (sym->getSymType()!="block_type")
    {
      for(int i=0; i<spaces; i++) cout << " ";
    }
    sym->print();
    if (root) cout << endl;
  }
}

string SymbolTable::getEncapsulatingClassName()
{
  if (getParent()->getParent()==nullptr)
  {
    return ((ClassTable*) this)->getClassName();
  }
  else if (getParent()==nullptr)
  {
    return "";
  }
  else
  {
    return getParent()->getEncapsulatingClassName();
  }
}

string SymbolTable::getTableType()
{
  return "generic";
}

string ClassTable::getTableType()
{
  return "class";
}
string ClassTable::getClassName()
{
  return className;
}
void ClassTable::setClassName(string cn)
{
  className=cn;
}

string MethodTable::getTableType()
{
  return "method";
}
string MethodTable::getMethodName()
{
  return methodName;
}
void MethodTable::setMethodName(string mn)
{
  methodName=mn;
}

string BlockTable::getTableType()
{
  return "block";
}
