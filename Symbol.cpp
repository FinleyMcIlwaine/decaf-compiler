/*
 * Symbol.cpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 *
 * Definition of Symbol class member functions
 */

#include "Symbol.hpp"

Symbol::Symbol()
{
  this->clear();
}

Symbol::Symbol(Symbol& copied)
{
  name=copied.getName();
  lineNumber=copied.getLineNumber();
  dataType=copied.getDataType();
}

Symbol* Symbol::clear()
{
  name="";
  lineNumber=-1;
  dataType="";
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

Symbol* Symbol::withDataType(string dt)
{
  dataType=dt;
  return this;
}

string Symbol::getName()
{
  return name;
}

int Symbol::getLineNumber()
{
  return lineNumber;
}

string Symbol::getDataType()
{
  return dataType;
}

void Symbol::print()
{
  cout << name << " " << dataType;
}

MethodSymbol::MethodSymbol() : Symbol()
{
  this->clear();
}

MethodSymbol* MethodSymbol::clear()
{
  Symbol::clear();
  numArgs=-1;
  argList.clear();
  return this;
}

string MethodSymbol::getDataType()
{
  string t = dataType + " <- ";
  if (argList.size()==0) t+="void";
  else
  {
    // TODO DOES THIS NEED ID NAMES TOO?
    for (int i=0; i<argList.size(); i++)
    {
      t+=argList.at(i)->getDataType()+" ";
    }
  }
  return t;
}

string MethodSymbol::getSymType()
{
  return SYM_TYPE;
}

void MethodSymbol::print()
{
  cout << name << " " << getSymType() << " " << getDataType();
}

ClassSymbol::ClassSymbol() : Symbol()
{
  this->clear();
}

ClassSymbol::ClassSymbol(Symbol& copied)
{
  name=copied.getName();
  lineNumber=copied.getLineNumber();
  dataType=copied.getDataType();
}

ClassSymbol* ClassSymbol::clear()
{
  Symbol::clear();
  return this;
}

string ClassSymbol::getDataType()
{
  return name;
}

string ClassSymbol::getSymType()
{
  return SYM_TYPE;
}

void ClassSymbol::print()
{
  cout << name << " " << SYM_TYPE;
}
