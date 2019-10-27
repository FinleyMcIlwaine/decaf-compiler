// MyScanner.cpp
// Finley McIlwaine
// COSC4785, Prof. Buckner
// Program 3
// October 27, 2019

#include "node.hpp"
#include "program3.tab.hpp"
#include "MyScanner.hpp"

MyScanner::MyScanner()
{
  lineNumber=1;
  columnNumber=1;
}

string MyScanner::getLine()
{
  return line;
}

int MyScanner::getColNum()
{
  return columnNumber;
}

int MyScanner::getLineNum()
{
  return lineNumber;
}

void MyScanner::read(char* txt)
{
  // Make a copy!!
  string str(txt);
  yylloc.first_column=columnNumber;
  line+=str;
  columnNumber+=yyleng;
  yylloc.last_column=columnNumber;
}

void MyScanner::printErrors()
{
  for(Error &err : errors)
  {
    if (err.getErrLine()=="")
    {
      err.withErrLine(lines.at(err.getLine()-1));
    }
    err.print();
  }
  errors.clear();
}

void MyScanner::addError(Error err)
{
  // Do not double-warn for same error spot
  bool dup = false;
  for(Error &e : errors)
  {
    dup = (err.getLine()==e.getLine() && err.getColumn()==e.getColumn());
    if (dup) return;
  }
  errors.push_back(err);
}
