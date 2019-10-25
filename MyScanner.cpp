// MyScanner.cpp
// Finley McIlwaine
// COSC4785, Prof. Buckner
// Program 3
// October 27, 2019

#include "MyScanner.hpp"
#include<iostream>

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
