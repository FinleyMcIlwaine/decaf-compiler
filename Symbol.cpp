/*
 * Symbol.cpp
 * Finley McIlwaine
 * Dec. 17, 2019
 * COSC4785, Program 6
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

Symbol* Symbol::withColNumber(int col)
{
  columnNumber=col;
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
int Symbol::getColNumber()
{
  return columnNumber;
}

Type* Symbol::getType()
{
  return types->getType(typePtr);
}
void Symbol::kill()
{
  dead=true;
}
bool Symbol::isDead()
{
  return dead;
}

string Symbol::getFullTypeString()
{
  Type* t=getType();
  if (!t) return "null";
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

void Symbol::setValue(int v)
{
  intValue=v;
}
void Symbol::setValue(string v)
{
  refValue=v;
}

int Symbol::getIntValue()
{
  return intValue;
}
string Symbol::getRefValue()
{
  return refValue;
}

BlockSymbol::BlockSymbol()
{
  this->clear();
}

BlockSymbol* BlockSymbol::clear()
{
  lineNumber=-1;
  typePtr=-1;
  return this;
}

BlockSymbol* BlockSymbol::withLineNumber(int ln)
{
  lineNumber=ln;
  return this;
}


BlockSymbol* BlockSymbol::withTypePtr(int ptr)
{
  typePtr=ptr;
  return this;
}

int BlockSymbol::getLineNumber()
{
  return lineNumber;
}

int BlockSymbol::getTypePtr()
{
  return typePtr;
}

Type* BlockSymbol::getType()
{
  return types->getType(typePtr);
}

string BlockSymbol::getSymType()
{
  return "block_type";
}

void BlockSymbol::print()
{
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
void ClassSymbol::addCtorType(CtorType* ct)
{
  ctorTypes.push_back(ct);
}
vector<CtorType*> ClassSymbol::getCtorTypes()
{
  return ctorTypes;
}

