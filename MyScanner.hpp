#ifndef MSCANNER_H
#define MSCANNER_H

#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif
#include "Error.hpp"
#include<string>
#include<vector>

using std::vector;
using std::string;

class MyScanner : public yyFlexLexer
{
  public:
    virtual int yylex();
    MyScanner();
    string getLine();
    int getColNum();
    int getLineNum();
    void read(char*);
    void printErrors();
    void printError();
    void addError(Error);
  private:
    vector<Error> errors;
    string line;
    vector<string> lines;
    int columnNumber;
    int lineNumber;
};

#endif
