// MyScanner.cpp
// Finley McIlwaine
// COSC4785, Prof. Buckner
// Program 3
// October 27, 2019

#include "MyScanner.hpp"
#include<iostream>
using std::cout;
void MyScanner::addVal(string val)
{
  values.push_back(val);
}

string MyScanner::getVal(int i)
{
  return values.at(i-1);
}

void MyScanner::concatToLine(char* chars)
{
  string str(chars);
  line+=str;
}

string MyScanner::getLine()
{
  return line;
}

void MyScanner::setColNum(int col)
{
  columnNo=col;
}

void MyScanner::incColNum(int inc=1)
{
  columnNo+=inc;
}

void MyScanner::incLineNum()
{
  lineNo++;
}

void MyScanner::setLineNum(int ln)
{
  lineNo=ln;
}

int MyScanner::getColNum()
{
  return columnNo;
}

int MyScanner::getLineNum()
{
  return lineNo;
}

void MyScanner::clearVals()
{
  values.clear();
}
