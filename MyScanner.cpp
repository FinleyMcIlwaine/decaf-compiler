/*
 * MyScanner.cpp
 * Finley McIlwaine
 * Dec. 17, 2019
 * COSC4785, Program 6
 *
 * Definition of MyScanner class member functions
*/

#include "Node.hpp"
#include "program6.tab.hpp"
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
    if (err.getErrLine()=="" && lines.size()!=0)
    {
      err.withErrLine(lines.at(err.getLine()-1));
    }
    err.print();
  }
  errors.clear();
}

// Prints all type errors stored in the errors array.
void MyScanner::printTypeErrors()
{
  if (typeErrors.size()==0) return;
  for(Error &err : typeErrors)
  {
    if (err.getErrLine()=="" && lines.size()!=0)
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

// Adds an error to the errors array, but only if an error
// has not already been added for that specific column and
// line combination.
void MyScanner::addTypeError(TypeError err)
{
  // Do not double-warn for same error spot
  bool dup = false;
  for(TypeError &e : typeErrors)
  {
    dup = (err.getLine()==e.getLine() && err.getColumn()==e.getColumn());
    if (dup) return;
  }
  typeErrors.push_back(err);
}

void MyScanner::addTypeCheck(Node* n)
{
  typeChecks.push_back(n);
}

void MyScanner::doTypeChecks()
{
  for (auto& n : typeChecks)
  {
    TypeError* te = n->typeCheck();
    if (te) addTypeError(*te);
  }
}
