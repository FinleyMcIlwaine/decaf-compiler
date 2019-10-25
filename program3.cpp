// program3.cpp
// Finley McIlwaine
// COSC 4785
// Professor Buckner
// program3

#include <iostream>
#include "node.hpp"
#include "program3.tab.hpp"
#include "MyScanner.hpp"
#include <string>

using std::cout;
using std::endl;
using std::string;

MyScanner scanner;
Node *tree;

int main(int argc, char **argv)
{
  yyparse();
  scanner.printErrors();
  tree->print();
  cout << endl;
  return 0;
}
