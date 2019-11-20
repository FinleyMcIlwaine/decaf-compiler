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
#include <unordered_map>
#include <string>
#include <iostream>
using std::unordered_map;
using std::string;
using std::cout;
using std::endl;

class SymbolTable
{
  public:
    SymbolTable();
    SymbolTable(SymbolTable* parent);
    SymbolTable* clear();
    SymbolTable* withParent(SymbolTable*);
    Symbol* lookup(string);
    int insert(Symbol*);
    SymbolTable* addChild(SymbolTable*);
    vector<SymbolTable*> getChildren();
    SymbolTable* getChild(int);
    int getDepth();
    void print();
 
  private:
    unordered_map<string,Symbol*> table;
    SymbolTable* parent;
    vector<SymbolTable*> children;
    int depth;
};
#endif
