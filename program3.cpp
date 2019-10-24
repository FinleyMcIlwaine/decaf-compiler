// program3.cpp
// Finley McIlwaine
// COSC 4785
// Professor Buckner
// program3

#include <iostream>
#include "node.hpp"
#include "program3.tab.hpp"
#include <FlexLexer.h>
#include <string>

using std::cout;
using std::endl;
using std::string;

yyFlexLexer scanner;
Node *tree;

int curLine, curColumn, len;
string val;

int main(int argc, char **argv)
{
  yyparse();
  cout << "\n** PRINTING TREE **" << endl;
  tree->print();
  cout << endl;
  return 0;
}
