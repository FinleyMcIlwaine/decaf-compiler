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
using std::map;
using std::string;

class SymbolTable
{
  public:
    int init(SymbolTable* p);
    Symbol* lookup(string);
    int insert(Symbol*);

  private:
    map<string,Symbol*> table;
    SymbolTable* parent;
};
#endif
