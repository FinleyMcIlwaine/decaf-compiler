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

SymbolTable::SymbolTable()
{
  this->clear();
}

SymbolTable* SymbolTable::clear()
{
  table.clear();
  parent=nullptr;
  children.clear();
  scope=-1;
  return this;
}

SymbolTable* SymbolTable::withParent(SymbolTable* p)
{
  parent=p;
  if (parent==nullptr) scope=0;
  else scope=parent->getScope();
  return this;
}

Symbol* SymbolTable::lookup(string name)
{
  try {
    return &table.at(name);
  } catch (...) {
    return nullptr;
  }
}

int SymbolTable::insert(Symbol s)
{
  try {
    table.at(s.getName());
    return -1;
  } catch (...) {
    table.emplace(s.getName(),s);
    return 0;
  }
}

SymbolTable* SymbolTable::addChild(SymbolTable* child)
{
  children.push_back(child);
  return this;
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

int SymbolTable::getScope()
{
  return scope;
}
