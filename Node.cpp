/*
 * Node.cpp
 * Finley McIlwaine
 * Nov. 26, 2019
 * COSC4785, Program 5
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

/* PROGRAM NODE DEFINITIONS */
void ProgramNode::print() {
  cout << "<Program> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* CLASS DEC NODE DEFINITIONS */
void ClassDecNode::print() {
  cout << "<ClassDec> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* CLASS START NODE DEFINITIONS */
void ClassStartNode::print() {
  cout << "<ClassStart> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}
string ClassStartNode::getClassId()
{
  return classId;
}
void ClassStartNode::setClassId(string id)
{
  classId=id;
}
SymbolTable* ClassStartNode::getSymbolTable()
{
  return classTable;
}
void ClassStartNode::setSymbolTable(SymbolTable* st)
{
  classTable=st;
}

/* CLASS BODY NODE DEFINITIONS */
ClassBodyNode::ClassBodyNode(Node *lf, Node *mi, Node *rt) : Node(lf,rt) {
  middle=mi;
}
void ClassBodyNode::print() {
  cout << "<ClassBody> --> " + sval << endl;
  if (left) left->print();
  if (middle) middle->print();
  if (right) right->print();
}
void ClassBodyNode::setMiddle(Node *mi)
{ 
  middle = mi;
}
Node* ClassBodyNode::getMiddle()
{
  return middle;
}

/* VARDECS NODE DEFINITIONS */
void VarDecsNode::print() {
  cout << "<VarDecs> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* VARDEC NODE DEFINITIONS */
VarDecNode::VarDecNode(Node *lf, Node *mi, Node *rt) : Node(lf,rt) {
  middle=mi;
}
void VarDecNode::print() {
  cout << "<VarDec> --> " + sval << endl;
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

/* TYPE NODE DEFINITIONS */
TypeNode::TypeNode(Node* lf, Node* rt) : Node(lf,rt)
{
  leftType=(TypeNode*)lf;
  typeString="";
}
void TypeNode::print() {
  cout << "<Type> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}
int TypeNode::getDimension()
{
  if (leftType) return 1+leftType->getDimension();
  return 0;
}
string TypeNode::getTypeString()
{
  return typeString;
}
void TypeNode::withTypeString(string s)
{
  typeString=s;
}

void SimpleTypeNode::print() {
  cout << "<SimpleType> --> " + sval << endl;
  if (left) left->print();
}
int SimpleTypeNode::getDimension()
{
  return -1;
}

/* CONSTRUCTORDECS NODE DEFINITIONS */
void ConstructorDecsNode::print() {
  cout << "<ConstructorDecs> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* CONSTRUCTOR DEC NODE DEFINITIONS */
ConstructorDecNode::ConstructorDecNode(Node *lf, Node *mi, Node *rt) 
  : Node(lf,rt) {
  middle=mi;
}
void ConstructorDecNode::print() {
  cout << "<ConstructorDec> --> " + sval << endl;
  if (left) left->print();
  if (middle) middle->print();
  if (right) right->print();
}
void ConstructorDecNode::setMiddle(Node *mi)
{ 
  middle = mi;
}
Node* ConstructorDecNode::getMiddle()
{
  return middle;
}

/* CONSTRUCTOR START NODE DEFINITIONS */
void CtorStartNode::print() {
  cout << "<ConstructorStart> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}
string CtorStartNode::getMethodId()
{
  return methodId;
}
void CtorStartNode::setMethodId(string id)
{
  methodId=id;
}
SymbolTable* CtorStartNode::getSymbolTable()
{
  return methodTable;
}
void CtorStartNode::setSymbolTable(SymbolTable* st)
{
  methodTable=st;
}

/* METHODDECS NODE DEFINITIONS */
void MethodDecsNode::print() {
  cout << "<MethodDecs> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* METHOD DEC NODE DEFINITIONS */
MethodDecNode::MethodDecNode(Node *lf, Node *sec, Node* trd, Node *rt) 
  : Node(lf,rt) {
  second=sec;
  third=trd;
}
void MethodDecNode::print() {
  cout << "<MethodDec> --> " + sval << endl;
  if (left) left->print();
  if (second) second->print();
  if (third) third->print();
  if (right) right->print();
}
void MethodDecNode::setSecond(Node* sec)
{ 
  second = sec;
}
Node* MethodDecNode::getSecond()
{
  return second;
}
void MethodDecNode::setThird(Node* trd)
{ 
  third = trd;
}
Node* MethodDecNode::getThird()
{
  return third;
}

/* PARAMETER LIST NODE */
void ParameterListNode::print() {
  cout << "<ParameterList> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* PARAMETER NODE */
void ParameterNode::print() {
  cout << "<Parameter> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* BLOCK NODE */
void BlockNode::print() {
  cout << "<Block> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* LOCAL VAR DECS NODE */
void LocalVarDecsNode::print() {
  cout << "<LocalVarDecs> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* LOCAL VAR DEC NODE */
void LocalVarDecNode::print() {
  cout << "<LocalVarDec> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* STMTS NODE */
void StmtsNode::print() {
  cout << "<Stmts> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* STMT NODE */
void StmtNode::print() {
  cout << "<Stmt> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* NAME NODE DEFINITIONS */
void NameNode::print()
{
  cout << "<Name> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* ARG LIST NODE DEFINITIONS */
void ArgListNode::print() {
  cout << "<ArgList> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* CONDITIONAL STMT NODE DEFINITIONS */
ConditionalStmtNode::ConditionalStmtNode(Node *lf, Node *mi, Node *rt) 
  : Node(lf,rt) {
  middle=mi;
}
void ConditionalStmtNode::print() {
  cout << "<ConditionalStmt> --> " + sval << endl;
  if (left) left->print();
  if (middle) middle->print();
  if (right) right->print();
}
void ConditionalStmtNode::setMiddle(Node *mi)
{ 
  middle = mi;
}
Node* ConditionalStmtNode::getMiddle()
{
  return middle;
}

/* OPTIONAL EXP NODE DEFINITIONS */
void OptionalExpNode::print() {
  cout << "<OptionalExpNode> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* EXP NODE DEFINITIONS */
ExpNode::ExpNode(Node *lf, Node *mi, Node *rt) : Node(lf,rt) {
  middle=mi;
}
void ExpNode::print() {
  cout << "<Exp> --> " + sval << endl;
  if (left) left->print();
  if (middle) middle->print();
  if (right) right->print();
}
void ExpNode::setMiddle(Node *mi)
{ 
  middle = mi;
}
Node* ExpNode::getMiddle()
{
  return middle;
}


/* NEWEXP NODE DEFINITIONS */
NewExpNode::NewExpNode(Node *lf, Node *mi, Node *rt) : Node(lf,rt) {
  middle=mi;
}
void NewExpNode::print() {
  cout << "<NewExp> --> " + sval << endl;
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

/* OPERATION NODE DEFINITIONS */
void UnaryOpNode::print()
{
  cout << "<UnaryOp> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}
void RelationOpNode::print()
{
  cout << "<RelationOp> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}
void SumOpNode::print()
{
  cout << "<SumOp> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}
void ProductOpNode::print()
{
  cout << "<ProductOp> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* ID NODE DEFINITIONS */
void IdNode::print()
{
  cout << "identifier --> " + sval << endl;
}

/* MULTIBRACKET NODE DEFINITIONS */
void MultibracketNode::print()
{
  cout << "<Multibrackets> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}
int MultibracketNode::getDimension()
{
  return dimension;
}
void MultibracketNode::setDimension(int d)
{
  dimension=d;
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
  cout << "<BracketExps> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* NUMBER NODE DEFINITIONS */
void NumberNode::print() {
  cout << "number --> " + sval << endl;
}

/* ID BRACK NODE DEFS */
void IdBrackNode::print()
{
  cout << "<IdBrack> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}
int IdBrackNode::getDimension()
{
  if (right) return ((MultibracketNode*)right)->getDimension();
  return 0;
}
string IdBrackNode::getId()
{
  if (left) return left->getString();
  return "";
}
