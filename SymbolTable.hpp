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
    SymbolTable();
    SymbolTable(SymbolTable* parent);
    SymbolTable* clear();
    SymbolTable* withParent(SymbolTable*);
    Symbol* lookup(string);
    int insert(Symbol);
    SymbolTable* addChild(SymbolTable*);
    vector<SymbolTable*> getChildren();
    SymbolTable* getChild(int);
    int getScope();
 
  private:
    map<string,Symbol> table;
    SymbolTable* parent;
    vector<SymbolTable*> children;
    int scope;
};
#endif
