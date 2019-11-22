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
SymbolTable::~SymbolTable()
{
  for (auto& entry : table)
  {
    delete entry.second;
  }
  table.clear();
  for(auto& c : children)
  {
    delete c;
  }
  children.clear();
  printOrder.clear();
}

SymbolTable::SymbolTable()
{
  this->clear();
}

SymbolTable* SymbolTable::clear()
{
  table.clear();
  printOrder.clear();
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
    Symbol* test = table.at(s->getName());
    if (test->getSymType()==s->getSymType()) return -1;
    // TODO HUGE PROBLEM, HOW TO CHAIN ENTRIES WITH SAME NAME!?!?!?!?!?!? ***************
    table.emplace(s->getName(),s);
    printOrder.push_back(s->getName());
    return 0;
  } catch (...) {
    table.emplace(s->getName(),s);
    printOrder.push_back(s->getName());
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
  for (auto& name : printOrder)
  {
    for(int i=0; i<spaces; i++) cout << " ";
    try {
      table.at(name)->print();
    } catch (...) {
      cout << "Could not print symbol: " + name << endl;
    }
    if (root) cout << endl;
  }
}
