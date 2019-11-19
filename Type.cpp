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

void Type::setTypeString(string str)
{
  typeString=str;
}

int Type::getDimension()
{
  return dimension;
}

void Type::setDimension(int d)
{
  dimension=d;
}

SymbolTable* Type::getSymbolTable()
{
  return myTable;
}

void Type::setSymbolTable(SymbolTable* tab)
{
  myTable=tab;
}
