/*
 * Symbol.cpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 *
 * Definition of Symbol class member functions
 */

#include "Symbol.hpp"

Symbol::Symbol() {
  this->clear();
}

Symbol* Symbol::clear()
{
  name="";
  lineNumber=-1;
  classType="";
  int numArgs=-1;
  argList.clear();
  symType=DEF_TYPE;
  dataType=DEF;
  returnType=DEF;
  return this;
}

Symbol* Symbol::withName(string nm)
{
  name=nm;
  return this;
}

Symbol* Symbol::withLineNumber(int n)
{
  lineNumber=n;
  return this;
}

Symbol* Symbol::withSymType(SymbolType st)
{
  symType=st;
  return this;
}

string Symbol::getName()
{
  return name;
}
