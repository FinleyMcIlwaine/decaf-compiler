/*
 * Symbol.hpp
 * Finley McIlwaine
 * Dec. 17, 2019
 * COSC4785, Program 6
 *
 * Declaration of Symbol class
*/


#ifndef SYMBOL_HPP
#define SYMBOL_HPP
class TypeTable;
class Type;
class CtorType;
#include <string>
#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::vector;

extern TypeTable* types;

class Symbol
{
  public:
    Symbol();
    Symbol(Symbol& copied);
    virtual ~Symbol()=default;
    virtual Symbol* clear();
    Symbol* withName(string name);
    Symbol* withLineNumber(int ln);
    Symbol* withColNumber(int col);
    Symbol* withTypePtr(int tp);
    int getTypePtr();
    Type* getType();
    virtual string getSymType();
    string getBaseTypeString();
    string getFullTypeString();
    void setValue(int);
    void setValue(string);
    int getIntValue();
    string getRefValue();
    
    string getName();
    int getLineNumber();
    int getColNumber();
    virtual void print();
    void kill();
    bool isDead();

  protected:
    string name;
    int lineNumber;
    int columnNumber;
    int intValue;
    string refValue;
    int typePtr;
    bool dead=false;
};

// I use this fake block symbol so blocks
// are handled as "symbols" that have their
// own symbol tables.
class BlockSymbol : public Symbol
{
  public:
    BlockSymbol();
    BlockSymbol* clear();
    BlockSymbol* withLineNumber(int ln);
    BlockSymbol* withTypePtr(int tp);
    int getTypePtr();
    Type* getType();
    
    int getLineNumber();
    void print();
    virtual string getSymType();

  protected:
    int lineNumber;
    int typePtr;
};

class MethodSymbol : public Symbol
{
  public:
    MethodSymbol();
    virtual ~MethodSymbol()=default;
    virtual MethodSymbol* clear();
    virtual string getSymType();
    virtual void print();
    int getNumArgs();
    string getArgTypesString();
  protected:
    int numArgs;
    vector<Symbol*> argList;
};

class CtorSymbol : public MethodSymbol
{
  public:
    virtual string getSymType();
};

class ClassSymbol : public Symbol
{
  public:
    ClassSymbol();
    ClassSymbol(Symbol& copied);
    virtual ~ClassSymbol()=default;
    virtual ClassSymbol* clear();
    virtual string getDataType();
    virtual string getSymType();
    virtual void print();
    void addCtorType(CtorType*);
    vector<CtorType*> getCtorTypes();
  private:
    vector<CtorType*> ctorTypes;
};
#endif

