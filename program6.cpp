/*
 * program6.cpp
 * Finley McIlwaine
 * Dec. 17, 2019
 * COSC4785, Program 6
 *
 * Main file
*/
#include "Error.hpp"
#include "Node.hpp"
#include "program6.tab.hpp"
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
string mainClass;

int main(int argc, char **argv)
{
  // Make the type table
  types=new TypeTable();

  // Make the root symbol table
  root=new SymbolTable();
  root->withParent(nullptr);
  cur=new SymbolTable();
  cur->withParent(root);
  mainClass="";

  // Parse
  yyparse();

  // Print syntax errors
  scanner.printErrors();

  // Main check
  if (mainClass=="")
  {
    TypeError* terr=new TypeError();
    terr->
      withColNumber(1)->
      withLineNumber(1)->
      withDesc("error: program must include a 'main' method.");
    scanner.addTypeError(*terr);
  }

  // Type check
  scanner.doTypeChecks();

  // Print type errors
  scanner.printTypeErrors();

  // Still print if there's no tree
  if(!tree) cout << "Parse error at end of input." << endl;
//  else tree->print();
  cout << endl;

  // Print the symbol tables
  if (root) root->print(true);
  else cout << "No root symbol table created!" << endl;

  return 0;
}
