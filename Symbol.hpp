#ifndef SYMBOL_HPP
#define SYMBOL_HPP
#include <string>
#include <vector>
using std::string;
using std::vector;

class Symbol
{
  public:
    enum SymbolType
    {
      DEF_TYPE,
      CLASS_TYPE,
      METHOD_TYPE,
      VARIABLE_TYPE
    };
    // Necessary?
    enum DataType
    {
      DEF,
      INT,
      VOID,
      CLASS
    };

    Symbol();
    Symbol* clear();
    Symbol* withName(string name);
    Symbol* withLineNumber(int ln);
    Symbol* withSymType(SymbolType type);
    
    string getName();

  private:
    SymbolType symType;
    DataType dataType;
    DataType returnType;
    
    // For every symbol type
    string name;
    int lineNumber;

    // If this is a class
    string classType;

    // If this is a function
    int numArgs;
    vector<Symbol*> argList;
};
#endif

