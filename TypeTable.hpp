/*
 * TypeTable.hpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 *
 * Declaration of the Type Table class
*/

#ifndef TYPETABLE_HPP
#define TYPETABLE_HPP
class Type;
class SymbolTable;
#include <vector>
#include <string>
using std::vector;
using std::string;

class TypeTable
{
  public:
    TypeTable();
    ~TypeTable();
    TypeTable* clear();
    int lookup(string,int);
    int addType(string, int);
    int addType(Type*);
    Type* getType(int);
    SymbolTable* hasSymbolTable(Type*);
    void printSymbolTable(int typeIndex);
 
  private:
    vector<Type*> table;
};
#endif
