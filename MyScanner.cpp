// MyScanner.cpp
// Finley McIlwaine
// COSC4785, Prof. Buckner
// Program 3
// October 27, 2019

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
  line+=str;
  columnNumber+=yyleng;
}

void MyScanner::printErrors()
{
  for(Error &err : errors)
  {
    err.print();
  }
  errors.clear();
}

void MyScanner::addError(Error err)
{
  errors.push_back(err);
}
