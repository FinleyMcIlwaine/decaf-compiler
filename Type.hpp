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
#include <vector>
using std::string;
using std::vector;

class Type
{
  public:
    string getTypeString();
    virtual string getFullTypeString();
    virtual ~Type() = default;
    Type* withTypeString(string);
    int getDimension();
    Type* withDimension(int);
    SymbolTable* getSymbolTable();
    Type* withSymbolTable(SymbolTable*);
 
  protected:
    SymbolTable* myTable;
    string typeString;
    int dimension;
};

class MethodType : public Type
{
  public:
    virtual string getFullTypeString();
    void addArgType(string);
    MethodType* withArgumentTypeList(vector<string>&);

  private:
    vector<string> argTypeStrs;
};

#endif
