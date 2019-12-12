/*
 * MyScanner.hpp
 * Finley McIlwaine
 * Dec. 17, 2019
 * COSC4785, Program 6
 *
 * Declaration of MyScanner class
*/
#ifndef MSCANNER_H
#define MSCANNER_H
#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif
class Node;
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
    void addTypeCheck(Node*);
    void doTypeChecks();

  private:
    vector<Error> errors;
    vector<TypeError> typeErrors;
    vector<Node*> typeChecks;
    string line;
    vector<string> lines;
    int columnNumber;
    int lineNumber;
};
#endif
