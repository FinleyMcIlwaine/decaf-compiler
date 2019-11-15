/*
 * SymbolTable.cpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 *
 * Definition of Symbol Table class member functions
*/

#include "Symbol.hpp"
#include "SymbolTable.hpp"

int SymbolTable::init(SymbolTable* p)
{
  parent=p;
  return 0;
}

Symbol* SymbolTable::lookup(string name)
{
  try {
    return table.at(name);
  } catch (...) {
    return nullptr;
  }
}

int SymbolTable::insert(Symbol* s)
{
  try {
    table.at(s->name);
    return -1;
  } catch (...) {
    table.emplace(s->name,s);
    return 0;
  }
}
