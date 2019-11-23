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

Type* Symbol::getType()
{
  return types->getType(typePtr);
}

string Symbol::getFullTypeString()
{
  Type* t=getType();
  if (!t) return "";
  return t->getFullTypeString();
}

string Symbol::getBaseTypeString()
{
  Type* t=getType();
  if (!t) return "";
  return t->getBaseTypeString();
}

string Symbol::getSymType()
{
  return "var_type";
}

void Symbol::print()
{
  cout << name << " " << getFullTypeString() << endl;
  types->printSymbolTable(typePtr);
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

string MethodSymbol::getSymType()
{
  return "method_type";
}
string CtorSymbol::getSymType()
{
  return "constructor_type";
}

void MethodSymbol::print()
{
  cout << name << " " << getSymType() << " " << getFullTypeString() << endl;
  types->printSymbolTable(typePtr);
}

int MethodSymbol::getNumArgs()
{
  MethodType* t=(MethodType*)getType();
  if (!t) return -1;
  return t->getNumArgs();
}
string MethodSymbol::getArgTypesString()
{
  MethodType* t=(MethodType*)getType();
  if (!t) return "";
  return t->getArgTypesString();
}

ClassSymbol::ClassSymbol() : Symbol()
{
  this->clear();
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
  return "class_type";
}

void ClassSymbol::print()
{
  cout << name << " class_type" << endl;
  types->printSymbolTable(typePtr);
}
