#ifndef SYMBOL_HPP
#define SYMBOL_HPP
class TypeTable;
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
    virtual ~Symbol() = default;
    virtual Symbol* clear();
    Symbol* withName(string name);
    Symbol* withLineNumber(int ln);
    Symbol* withTypePtr(int tp);
    int getTypePtr();
    virtual string getTypeString();
    
    string getName();
    int getLineNumber();
    virtual void print();

  protected:
    string name;
    int lineNumber;
    int typePtr;
};

class MethodSymbol : public Symbol
{
  public:
    MethodSymbol();
    virtual ~MethodSymbol()=default;
    virtual MethodSymbol* clear();
    virtual string getTypeString();
    string getSymType();
    virtual void print();
  private:
    const string SYM_TYPE="method_type";
    int numArgs;
    vector<Symbol*> argList;
};

class ClassSymbol : public Symbol
{
  public:
    ClassSymbol();
    ClassSymbol(Symbol& copied);
    virtual ~ClassSymbol()=default;
    virtual ClassSymbol* clear();
    virtual string getDataType();
    string getSymType();
    virtual void print();
  private:
    const string SYM_TYPE="class_type";
};
#endif

