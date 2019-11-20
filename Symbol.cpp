/*
 * Symbol.cpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 *
 * Definition of Symbol class member functions
 */

#include "Type.hpp"
#include "TypeTable.hpp"
#include "Symbol.hpp"

Symbol::Symbol()
{
  this->clear();
}

Symbol::Symbol(Symbol& copied)
{
  name=copied.getName();
  lineNumber=copied.getLineNumber();
  typePtr=copied.getTypePtr();
}

Symbol* Symbol::clear()
{
  name="";
  lineNumber=-1;
  typePtr=-1;
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

Symbol* Symbol::withTypePtr(int tp)
{
  typePtr=tp;
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

int Symbol::getTypePtr()
{
  return typePtr;
}

string Symbol::getTypeString()
{
  Type* t=types->getType(typePtr);
  if (!t) return "";
  return t->getTypeString();
}

void Symbol::print()
{
  cout << name << " " << getTypeString();
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

string MethodSymbol::getTypeString()
{
  Type* t=types->getType(typePtr);
  if (!t) return "";
  string ts = t->getTypeString() + " <- ";
  if (argList.size()==0) ts+="void";
  else
  {
    for (int i=0; i<argList.size(); i++)
    {
      ts+=argList.at(i)->getTypeString()+" ";
    }
  }
  return ts;
}

string MethodSymbol::getSymType()
{
  return SYM_TYPE;
}

void MethodSymbol::print()
{
  cout << name << " " << getSymType() << " " << getTypeString();
}

ClassSymbol::ClassSymbol() : Symbol()
{
  this->clear();
}

ClassSymbol::ClassSymbol(Symbol& copied)
{
  name=copied.getName();
  lineNumber=copied.getLineNumber();
  typePtr=copied.getTypePtr();
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
