/*
 * Type.hpp
 * Finley McIlwaine
 * Dec. 17, 2019
 * COSC4785, Program 6
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
    string getBaseTypeString();
    virtual string getFullTypeString();
    virtual ~Type() = default;
    Type* withBaseTypeString(string);
    int getDimension();
    Type* withDimension(int);
    SymbolTable* getSymbolTable();
    Type* withSymbolTable(SymbolTable*);
    virtual string getTypeType();
    int equals(Type*);
 
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
    MethodType* withArgTypeList(vector<string>&);
    vector<string> getArgTypeList();
    int getNumArgs();
    string getArgTypesString();
    virtual string getTypeType();

  protected:
    vector<string> argTypeStrs;
};

class CtorType : public MethodType
{
  public:
    virtual string getTypeType();
};

#endif
