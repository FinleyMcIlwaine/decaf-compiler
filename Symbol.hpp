#ifndef SYMBOL_HPP
#define SYMBOL_HPP
#include <string>
#include <vector>
#include <iostream>
using std::cout;
using std::string;
using std::vector;

class Symbol
{
  public:
    Symbol();
    Symbol(Symbol& copied);
    virtual ~Symbol() = default;
    virtual Symbol* clear();
    Symbol* withName(string name);
    Symbol* withLineNumber(int ln);
    Symbol* withDataType(string dt);
    
    string getName();
    int getLineNumber();
    virtual string getDataType();
    virtual void print();

  protected:
    string name;
    int lineNumber;
    string dataType;
};

class MethodSymbol : public Symbol
{
  public:
    MethodSymbol();
    virtual ~MethodSymbol()=default;
    virtual MethodSymbol* clear();
    virtual string getDataType();
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

