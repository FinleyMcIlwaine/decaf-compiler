/*
 * TypeTable.cpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 * 
 * Implementation of the Type Table class
*/

#include "Type.hpp"
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

int TypeTable::lookup(string typeStr)
{
  for (int i=0; i<table.size(); i++)
  {
    if (table.at(i)->getTypeString() == typeStr) return i;
  }
  return -1;
}

int TypeTable::addType(Type* t)
{
  int loc=lookup(t->getTypeString());
  if (loc==-1)
  {
    table.push_back(t);
    return table.size()-1;
  }
  return loc;
}

Type* TypeTable::getType(int i)
{
  if (i>=table.size() || i < 0) return nullptr;
  else return table.at(i);
}
