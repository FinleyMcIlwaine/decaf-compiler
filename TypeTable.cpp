/*
 * TypeTable.cpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 * 
 * Implementation of the Type Table class
*/

#include "Type.hpp"
#include "Symbol.hpp"
#include "SymbolTable.hpp"
#include "TypeTable.hpp"

TypeTable::TypeTable()
{
  // DEFAULT TYPES //
  Type* intType=new Type();
  intType->
    withTypeString("int")->
    withDimension(0);
  table.push_back(intType);
  Type* voidType=new Type();
  voidType->
    withTypeString("void")->
    withDimension(0);
  table.push_back(voidType);
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

int TypeTable::lookup(string typeStr, int dim)
{
  for (int i=0; i<table.size(); i++)
  {
    if (table.at(i)->getTypeString() == typeStr && 
        table.at(i)->getDimension() == dim) 
    {
      return i;
    }
  }
  return -1;
}

int TypeTable::addType(string ts, int d)
{
  int exist=lookup(ts,d);
  if (exist==-1)
  {
    Type* t=new Type();
    t->withTypeString(ts)->
       withDimension(d)->
       withSymbolTable(hasSymbolTable(t));
    table.push_back(t);
    return table.size()-1;
  }
  else
  {
    return exist;
  }
}

int TypeTable::addType(Type* t)
{
  int exist=lookup(t->getTypeString(),t->getDimension());
  if (exist==-1)
  {
    table.push_back(t);
    return table.size()-1;
  }
  else
  {
    return exist;
  }
}

Type* TypeTable::getType(int i)
{
  if (i>=table.size() || i < 0) return nullptr;
  else return table.at(i);
}

SymbolTable* TypeTable::hasSymbolTable(Type* t)
{
  if (!t) return nullptr;
  for(auto& tp : table)
  {
    if (t->getTypeString() == tp->getTypeString())
    {
      return tp->getSymbolTable();
    }
  }
  return nullptr;
}

void TypeTable::printSymbolTable(int typeIndex)
{
  SymbolTable* st=hasSymbolTable(getType(typeIndex));
  if (st) st->print();
}
