/*
 * Node.cpp
 * Finley McIlwaine
 * Nov. 10, 2019
 * COSC4785, Program 4
 *
 * Definition of all node class member functions
*/
#include "Node.hpp"

/* BASE NODE DEFINITIONS */
Node::Node(Node *lf, Node *rt) 
{
  reset();
  dval=0.0;
  ival=0;
  left=lf;
  right=rt;
}

Node::~Node() 
{
  if(left) delete left;
  if(right) delete right;
}

int Node::getInt() const 
{
  return ival;
}

double Node::getDbl() const 
{
  return dval;
}

string Node::getString() const 
{
  return sval;
}

void Node::setVal(const char *v)
{
  sval=v;
}

void Node::setVal(const string s)
{
  sval=s;
}

void Node::setVal(const int i)
{
  ival=i;
}

void Node::setVal(const double d)
{
  dval=d;
}

void Node::reset()
{
  yyline=yycol=nextLine=nextCol=1;
  sval.clear();
}

void Node::setLeft(Node *p)
{
  left=p;
  return;
}

void Node::setRight(Node *p)
{
  right=p;
  return;
}

Node* Node::getLeft()
{
  return left;
}

Node* Node::getRight()
{
  return right;
}

void Node::print()
{
  cout << endl;
  if (left) left->print();
  if (right) left->print();
}


/* NAME NODE DEFINITIONS */

void NameNode::print()
{
  cout << "<name> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}


/* ID NODE DEFINITIONS */

void IdNode::print()
{
  cout << "ID --> " + sval << endl;
}


/* MULTIBRACKET NODE DEFINITIONS */

void MultibracketNode::print()
{
  cout << "<multibrackets> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}


/* BRACKETEXP and BRACKETEXPS NODE DEFINITIONS */

void BracketExpNode::print()
{
  cout << "<bracketexp> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

void BracketExpsNode::print()
{
  cout << "<bracketexps> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}


/* EXP NODE DEFINITIONS */

void ExpNode::print() {
  cout << "<exp> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}


/* NUMBER NODE DEFINITIONS */

void NumberNode::print() {
  cout << "NUMBER --> " + sval << endl;
}


/* TYPE NODE DEFINITIONS */

void TypeNode::print() {
  cout << "<type> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}
void SimpleTypeNode::print() {
  cout << "<simpletype> --> " + sval << endl;
}


/* NEWEXP NODE DEFINITIONS */

NewExpNode::NewExpNode(Node *lf, Node *mi, Node *rt) : Node(lf,rt) {
  middle=mi;
}
void NewExpNode::print() {
  cout << "<newexp> --> " + sval << endl;
  if (left) left->print();
  if (middle) middle->print();
  if (right) right->print();
}
void NewExpNode::setMiddle(Node *mi)
{ 
  middle = mi;
}
Node* NewExpNode::getMiddle()
{
  return middle;
}


/* VARDEC NODE DEFINITIONS */

VarDecNode::VarDecNode(Node *lf, Node *mi, Node *rt) : Node(lf,rt) {
  middle=mi;
}
void VarDecNode::print() {
  cout << "<vardec> --> " + sval << endl;
  if (left) left->print();
  if (middle) middle->print();
  if (right) right->print();
}
void VarDecNode::setMiddle(Node *mi)
{ 
  middle = mi;
}
Node* VarDecNode::getMiddle()
{
  return middle;
}


/* ELEMENTS NODE DEFINITIONS */

void ElementsNode::print() {
  cout << "<elements> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}


/* PROGRAM NODE DEFINITIONS */

void ProgramNode::print() {
  cout << "<program> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

