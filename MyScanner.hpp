/*
 * MyScanner.hpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 *
 * Declaration of MyScanner class
*/
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
    void printTypeErrors();
    void printError();
    void addError(Error);
    void addTypeError(TypeError);
  private:
    vector<Error> errors;
    vector<TypeError> typeErrors;
    string line;
    vector<string> lines;
    int columnNumber;
    int lineNumber;
};
#endif
