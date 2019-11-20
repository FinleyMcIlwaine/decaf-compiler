/*
 * Type.cpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 * 
 * Implementation of the Type class
*/

#include "Type.hpp"

string Type::getTypeString()
{
  return typeString;
}

Type* Type::withTypeString(string str)
{
  typeString=str;
  return this;
}

int Type::getDimension()
{
  return dimension;
}

Type* Type::withDimension(int d)
{
  dimension=d;
  return this;
}

SymbolTable* Type::getSymbolTable()
{
  return myTable;
}

Type* Type::withSymbolTable(SymbolTable* tab)
{
  myTable=tab;
  return this;
}
