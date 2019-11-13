/*
 * SymbolTable.hpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 *
 * Declaration of the Symbol Table class
*/

#ifndef SYMBOLTABLE_HPP
#define SYMBOLTABLE_HPP
#include <map>
#include <string>
#include "Symbol.hpp"

using std::map;
using std::string;

class SymbolTable
{
  public:
    SymbolTable(SymbolTable* p);
    int lookup(string id);
    int insert(Symbol s);

  private:
    map<string,Symbol> table;
    SymbolTable* parent;
};
#endif


