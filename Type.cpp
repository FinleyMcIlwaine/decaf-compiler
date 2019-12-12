/*
 * Type.cpp
 * Finley McIlwaine
 * Dec. 17, 2019
 * COSC4785, Program 6
 * 
 * Implementation of the Type class
*/
#include "Type.hpp"

string Type::getBaseTypeString()
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

MethodType* MethodType::withArgTypeList(vector<string>& ts)
{
  argTypeStrs = ts;
  return this;
}
  
int MethodType::getNumArgs()
{
  return argTypeStrs.size();
}
string MethodType::getArgTypesString()
{
  if (argTypeStrs.size()==0) return "void";
  string s="";
  for (int i=0; i<argTypeStrs.size(); i++)
  {
    string t=argTypeStrs.at(i);
    s+=t;
    if (i<argTypeStrs.size()-1) s+="x ";
  }
  return s;
}

Type* Type::withBaseTypeString(string str)
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

string Type::getTypeType()
{
  return "type";
}

string MethodType::getTypeType()
{
  return "method_type";
}
vector<string> MethodType::getArgTypeList()
{
  return argTypeStrs;
}
