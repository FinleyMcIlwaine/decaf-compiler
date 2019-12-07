/*
 * TypeTable.cpp
 * Finley McIlwaine
 * Dec. 17, 2019
 * COSC4785, Program 6
 * 
 * Implementation of the Type Table class
*/

#include "Type.hpp"
#include "Symbol.hpp"
#include "SymbolTable.hpp"
#include "TypeTable.hpp"

TypeTable::TypeTable()
{
  // DEFAULT TYPES ??? //
}

TypeTable::~TypeTable()
{
  for(auto& t : table)
  {
    delete t;
  }
  table.clear();
}

TypeTable* TypeTable::clear()
{
  table.clear();
  return this;
}

int TypeTable::addType(string ts, int d)
{
  Type* t=new Type();
  t->withBaseTypeString(ts)->
     withDimension(d);
  table.push_back(t);
  return table.size()-1;
}

int TypeTable::addType(Type* t)
{
  table.push_back(t);
  return table.size()-1;
}

Type* TypeTable::getType(int i)
{
  if (i>=table.size() || i < 0) return nullptr;
  else return table.at(i);
}

void TypeTable::printSymbolTable(int typeIndex)
{
  SymbolTable* st=getType(typeIndex)->getSymbolTable();
  if (st) st->print();
}
