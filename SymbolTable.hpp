/*
 * SymbolTable.hpp
 * Finley McIlwaine
 * Dec. 17, 2019
 * COSC4785, Program 6
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
    virtual ~SymbolTable();
    SymbolTable(SymbolTable* parent);
    SymbolTable* clear();
    SymbolTable* withParent(SymbolTable*);
    vector<Symbol*> lookup(string);
    int insert(Symbol*);
    SymbolTable* addChild(SymbolTable*);
    vector<SymbolTable*> getChildren();
    SymbolTable* getChild(int);
    int getDepth();
    void print(bool root=false);
    SymbolTable* getParent();
    virtual string getTableType();
    string getEncapsulatingClassName();
    Symbol* getEncapsulatingClassSymbol();
    void setDeleteOnResolve(bool);
    bool getDeleteOnResolve();

  protected:
    unordered_map<string,vector<Symbol*>> table;
    SymbolTable* parent;
    vector<SymbolTable*> children;
    vector<Symbol*> printOrder;
    int depth;
    bool deleteOnResolve;
};

class ClassTable : public SymbolTable
{
  public:
    virtual string getTableType();
    Symbol* getClassSymbol();
    void setClassSymbol(Symbol*);
    string getClassName();
    void setClassName(string);
  private:
    Symbol* mySymbol;
    string className;
};

class MethodTable : public SymbolTable
{
  public:
    virtual string getTableType();
    string getMethodName();
    void setMethodName(string);
  private:
    string methodName;
};

class BlockTable : public SymbolTable
{
  public:
    virtual string getTableType();
};
#endif
