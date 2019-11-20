/*
 * Type.hpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 *
 * Declaration of the Type class
*/

#ifndef TYPE_HPP
#define TYPE_HPP
class SymbolTable;
#include <string>
using std::string;

class Type
{
  public:
    string getTypeString();
    string getFullTypeString();
    Type* withTypeString(string);
    int getDimension();
    Type* withDimension(int);
    SymbolTable* getSymbolTable();
    Type* withSymbolTable(SymbolTable*);
 
  private:
    SymbolTable* myTable;
    string typeString;
    int dimension;
};
#endif
