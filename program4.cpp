/*
 * program4.cpp
 * Finley McIlwaine
 * Nov. 10, 2019
 * COSC4785, Program 4
 *
 * Main file
*/
#include "Node.hpp"
#include "program4.tab.hpp"
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
  if(tree) tree->print();
  else cout << "Parse error at end of input." << endl;
  cout << endl;

  return 0;
}
