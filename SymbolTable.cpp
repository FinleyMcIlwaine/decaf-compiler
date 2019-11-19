/*
 * SymbolTable.cpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
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

SymbolTable::SymbolTable()
{
  this->clear();
}

SymbolTable* SymbolTable::clear()
{
  table.clear();
  parent=nullptr;
  children.clear();
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

Symbol* SymbolTable::lookup(string name)
{
  try {
    return table.at(name);
  } catch (...) {
    return nullptr;
  }
}

int SymbolTable::insert(Symbol* s)
{
  try {
    table.at(s->getName());
    return -1;
  } catch (...) {
    table.emplace(s->getName(),s);
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

int SymbolTable::getDepth()
{
  return depth;
}

void SymbolTable::print()
{
  int spaces=depth*2;
  for (auto& entry : table)
  {
    for(int i=0; i<spaces; i++) cout << " ";
    entry.second->print();
    cout << endl;
  }
  for (auto& child : children)
  {
    child->print();
  }
}
