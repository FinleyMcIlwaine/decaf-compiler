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
#include "Type.hpp"
#include "TypeTable.hpp"
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

MyScanner scanner;
Node* tree;
SymbolTable* root;
SymbolTable* cur;
TypeTable* types;

int main(int argc, char **argv)
{
  // Make the type table
  types=new TypeTable();

  // Make the root symbol table
  root=new SymbolTable();
  root->withParent(nullptr);
  cur=new SymbolTable();
  cur->withParent(root);

  // Parse
  yyparse();

  // Print syntax errors
  scanner.printErrors();

  // Type checking right here probably

  // Don't print syntax tree for this assignment
  // if (tree) tree->print();
  
  // Still print if there's no tree
  if(!tree) cout << "Parse error at end of input." << endl;
  cout << endl;

  // Print the symbol tables
  if (root) root->print(true);
  else cout << "No root symbol table created!" << endl;

  return 0;
}
