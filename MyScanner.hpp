#ifndef MSCANNER_H
#define MSCANNER_H

#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

#include<string>
#include<vector>

using std::vector;
using std::string;

class MyScanner : public yyFlexLexer
{
  public:
    virtual int yylex();
    void addVal(string);
    string getVal(int);
    void concatToLine(char*);
    string getLine();
    void resetCol();
    void setColNum(int);
    void incColNum(int);
    void incLineNum();
    void setLineNum(int);
    int getColNum();
    int getLineNum();
    void clearVals();
  private:
    string line;
    vector<string> values;
    vector<string> lines;
    int columnNo;
    int lineNo;
};

#endif
