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
    virtual Symbol* clear();
    Symbol* withName(string name);
    Symbol* withLineNumber(int ln);
    
    string getName();
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
    virtual ClassSymbol* clear();
    virtual string getDataType();
    string getSymType();
    virtual void print();
  private:
    const string SYM_TYPE="class_type";
    string classId;
};
#endif

