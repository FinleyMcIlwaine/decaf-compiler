/*
 * program3.cpp
 * Finley McIlwaine
 * Oct. 27, 2019
 * COSC4785, Program 3
 *
 * Main file
*/
#include "Node.hpp"
#include "program3.tab.hpp"
#include "MyScanner.hpp"
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

MyScanner scanner;
Node *tree;

int main(int argc, char **argv)
{
  // Parse
  yyparse();

  // Print syntax errors
  scanner.printErrors();

  // Print syntax tree
  tree->print();
  cout << endl;

  return 0;
}
