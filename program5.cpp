/*
 * program5.cpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
 *
 * Main file
*/
#include "Node.hpp"
#include "program5.tab.hpp"
#include "MyScanner.hpp"
#include "Symbol.hpp"
#include "SymbolTable.hpp"
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

MyScanner scanner;
Node* tree;
SymbolTable* root;

int main(int argc, char **argv)
{
  // Make the root symbol table
  root=new SymbolTable();
  root->init(nullptr);

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
