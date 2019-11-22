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

string Type::getFullTypeString()
{
  string s=typeString;
  for(int i=0; i<dimension; i++)
  {
    s+="[]";
  }
  return s;
}

string MethodType::getFullTypeString()
{
  string s=typeString;
  for(int i=0; i<dimension; i++)
  {
    s+="[]";
  }
  s += " <-";
  if (argTypeStrs.size()==0) return s+" void";
  for (int i=0; i<argTypeStrs.size(); i++)
  {
    string t=argTypeStrs.at(i);
    s+=" "+t;
    if (i<argTypeStrs.size()-1) s+=" x";
  }
  return s;
}

MethodType* MethodType::withArgumentTypeList(vector<string>& ts)
{
  argTypeStrs = ts;
  return this;
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
