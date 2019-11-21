/*
 * MyScanner.cpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 *
 * Definition of MyScanner class member functions
*/
#include "Node.hpp"
#include "program5.tab.hpp"
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

// Reads characters, incrementing line and column number
// variables apporpriately and saving the characters in the
// current line buffer. Also increments location tracking
// values for bison.
void MyScanner::read(char* txt)
{
  // Make a copy!!
  string str(txt);
  yylloc.first_column=columnNumber;
  line+=str;
  columnNumber+=yyleng;
  yylloc.last_column=columnNumber;
}

// Prints all errors stored in the errors array.
void MyScanner::printErrors()
{
  if (errors.size()==0) return;
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

// Adds an error to the errors array, but only if an error
// has not already been added for that specific column and
// line combination.
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
