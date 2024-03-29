/*
 * Node.hpp
 * Finley McIlwaine
 * Dec. 17, 2019
 * COSC4785, Program 6
 *
 * Declaration of all node classes
*/
#ifndef NODE_HPP
#define NODE_HPP
#include<iostream>
#include<string>
#include <vector>
#include "Symbol.hpp"
#include "Type.hpp"
#include "SymbolTable.hpp"
#include "Error.hpp"
using std::string;
using std::endl;
using std::cout;
using std::vector;
extern SymbolTable* root;

/** BASE NODE TYPE **/
class Node {
  public:
    Node(Node *lf=0, Node *rt=0);
    virtual ~Node();
    int getInt() const;
    double getDbl() const;
    string getString() const; 
    void setVal(const char *v);
    void setVal(const string s);
    void setVal(const int i);
    void setVal(const double d);
    void reset();
    void setLeft(Node *p);
    void setRight(Node *p);
    Node* getLeft();
    Node* getRight();
    virtual void print();
    virtual TypeError* typeCheck();
    void setType(Type*);
    void setPotentialTypes(vector<Type*>);
    vector<Type*> getPotentialTypes();
    virtual Type* getType();
    void setMySymbolTable(SymbolTable*);
    SymbolTable* getMySymbolTable();
    string checkType;
    int line;
    int col;
    bool checked;

  protected:
    int ival;
    double dval;
    string sval;
    int nextCol;
    int nextLine;
    Node *left, *right;
    Type* myType;
    vector<Type*> myPotentialTypes;
    SymbolTable* mySymTab;
};

/** PROGRAM NODE TYPE **/
class ProgramNode : public Node
{
  public:
    ProgramNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** CLASS DEC NODE TYPE **/
class ClassDecNode : public Node
{
  public:
    ClassDecNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** CLASS START NODE TYPE **/
class ClassStartNode : public Node
{
  public:
    ClassStartNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
    string getClassId();
    void setClassId(string);
    SymbolTable* getSymbolTable();
    void setSymbolTable(SymbolTable*);
  protected:
    string classId;
    SymbolTable* classTable;
};

/** CLASS BODY NODE TYPE **/
class ClassBodyNode : public Node
{
  public:
    ClassBodyNode(Node *lf=0, Node *mi=0, Node *rt=0);
    void print();
    void setMiddle(Node *mi);
    Node* getMiddle();
  private:
    Node *middle;
};

/** VARDECS NODE TYPE **/
class VarDecsNode : public Node
{
  public:
    VarDecsNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** VARDEC NODE TYPE **/
class VarDecNode : public Node
{
  public:
    VarDecNode(Node *lf=0, Node *mi=0, Node *rt=0);
    virtual void print();
    void setMiddle(Node *mi);
    Node* getMiddle();
    void setVarSymbol(Symbol*);
    Symbol* getVarSymbol();
    virtual TypeError* typeCheck();
  private:
    Node *middle;
    Symbol* myVarSym;
};

/** TYPE NODE TYPE **/
class TypeNode : public Node
{
  public:
    TypeNode(Node *lf=0, Node *rt=0);
    void print();
    virtual int getDimension();
    string getTypeString();
    void withTypeString(string);
  protected:
    TypeNode* leftType;
    string typeString;
};

/** SIMPLETYPE NODE TYPE **/
class SimpleTypeNode : public TypeNode
{
  public:
    SimpleTypeNode(Node *lf=0, Node *rt=0) : TypeNode(lf,rt) {}
    void print();
    virtual int getDimension();
};

/** CONSTRUCTOR DECS NODE TYPE **/
class ConstructorDecsNode : public Node
{
  public:
    ConstructorDecsNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** PARAMETER LIST NODE TYPE **/
class ParameterListNode : public Node
{
  public:
    ParameterListNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
    void buildArgSymbolList(vector<Symbol*>*);
};

/** CONSTRUCTOR START NODE TYPE **/
class CtorStartNode : public Node
{
  public:
    CtorStartNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
    string getMethodId();
    void setMethodId(string);
    SymbolTable* getSymbolTable();
    void setMethodTable(SymbolTable*);
    void setParameterListNode(Node*);
    ParameterListNode* getParameterListNode();
    virtual TypeError* typeCheck();
    void setMethodSymbol(Symbol*);

  protected:
    Symbol* methodSymbol;
    ParameterListNode* myParameters;
    string methodId;
    SymbolTable* methodTable;
};

/** CONSTRUCTOR DEC NODE TYPE **/
class ConstructorDecNode : public Node
{
  public:
    ConstructorDecNode(Node *lf=0, Node *mi=0, Node *rt=0);
    void print();
    void setMiddle(Node *mi);
    Node* getMiddle();
  private:
    Node *middle;
};

/** METHOD DECS NODE TYPE **/
class MethodDecsNode : public Node
{
  public:
    MethodDecsNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** METHOD DECLARATION NODE TYPE **/
class MethodDecNode : public Node
{
  public:
    MethodDecNode(Node *lf=0, Node *sec=0, Node* trd=0,  Node *rt=0);
    void print();
    void setSecond(Node* sec);
    void setThird(Node* trd);
    Node* getSecond();
    Node* getThird();
  private:
    Node* second;
    Node* third;

};

/** METHOD START NODE TYPE **/
class MethodStartNode : public Node
{
  public:
    MethodStartNode(Node *lf=0, Node *sec=0, Node* trd=0,  Node *rt=0);
    void print();
    void setSecond(Node* sec);
    void setThird(Node* trd);
    Node* getSecond();
    Node* getThird();
    virtual TypeError* typeCheck();
    void setMethodSymbol(Symbol*);
    void setMethodTable(SymbolTable*);
    Symbol* getMethodSymbol();
    SymbolTable* getMethodTable();
    void setParameterListNode(Node*);
    ParameterListNode* getParameterListNode();

  private:
    ParameterListNode* myParameters;
    Symbol* methodSymbol;
    SymbolTable* methodTable;
    Node* second;
    Node* third;
};

/** PARAMETER NODE TYPE **/
class ParameterNode : public Node
{
  public:
    ParameterNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void setSymbol(Symbol*);
    Symbol* getSymbol();
    void print();
  private:
    Symbol* mySymbol;
};

/** BLOCK NODE TYPE **/
class BlockNode : public Node
{
  public:
    BlockNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** STMT BLOCK NODE TYPE **/
class StmtBlockNode : public Node
{
  public:
    StmtBlockNode(Node *lf=0, Node *mi=0, Node *rt=0);
    void print();
    void setMiddle(Node *mi);
    Node* getMiddle();
  private:
    Node *middle;
};

/** STMT BLOCK START NODE TYPE **/
class StmtBlockStartNode : public Node
{
  public:
    StmtBlockStartNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};


/** LOCAL VAR DECS NODE TYPE **/
class LocalVarDecsNode : public Node
{
  public:
    LocalVarDecsNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** LOCAL VAR DEC NODE TYPE **/
class LocalVarDecNode : public VarDecNode
{
  public:
    LocalVarDecNode(Node *lf=0, Node *rt=0) : VarDecNode(lf,rt) {}
    virtual void print();
};

/** STMTS NODE TYPE **/
class StmtsNode : public Node
{
  public:
    StmtsNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** STMT NODE TYPE **/
class StmtNode : public Node
{
  public:
    virtual TypeError* typeCheck();
    StmtNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** NAME NODE TYPE **/
class NameNode : public Node
{
  public:
    NameNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
    virtual TypeError* typeCheck();
    string identifier;
};

/** ARGLIST NODE TYPE **/
class ArgListNode : public ParameterListNode
{
  public:
    ArgListNode(Node *lf=0, Node *rt=0) : ParameterListNode(lf,rt) {}
    virtual TypeError* typeCheck();
    void buildArgTypeList(vector<Type*>*);
    void print();
};

/** CONDITIONAL STMT NODE TYPE **/
class ConditionalStmtNode : public Node
{
  public:
    ConditionalStmtNode(Node *lf=0, Node *mi=0, Node *rt=0);
    void print();
    void setMiddle(Node *mi);
    Node* getMiddle();
  private:
    Node *middle;
};

/** OPT EXP NODE TYPE **/
class OptionalExpNode : public Node
{
  public:
    OptionalExpNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** EXP NODE TYPE **/
class ExpNode : public Node
{
  public:
    ExpNode(Node *lf=0, Node *mi=0, Node *rt=0);
    TypeError* typeCheck();
    void print();
    void setMiddle(Node *mi);
    Node* getMiddle();
  private:
    Node *middle;
};

/** NEWEXP NODE TYPE **/
class NewExpNode : public Node
{
  public:
    NewExpNode(Node *lf=0, Node *mi=0, Node *rt=0);
    void print();
    void setMiddle(Node *mi);
    virtual TypeError* typeCheck();
    Node* getMiddle();
  private:
    Node *middle;
};

/** OPERATION NODE TYPES **/
class UnaryOpNode : public Node
{
  public:
    UnaryOpNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};
class RelationOpNode : public Node
{
  public:
    RelationOpNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};
class SumOpNode : public Node
{
  public:
    SumOpNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};
class ProductOpNode : public Node
{
  public:
    ProductOpNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** ID NODE TYPE **/
class IdNode : public Node
{
  public:
    IdNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** MULTIBRACKET NODE TYPE **/
class MultibracketNode : public Node
{
  public:
    MultibracketNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
    int getDimension();
    void setDimension(int);

  protected:
    int dimension;
};

/** BRACKETEXP and BRACKETEXPS NODE TYPE **/
class BracketExpNode : public Node
{
  public:
    virtual TypeError* typeCheck();
    BracketExpNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

class BracketExpsNode : public Node
{
  public:
    virtual TypeError* typeCheck();
    int getDimension();
    BracketExpsNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** NUMBER NODE TYPE **/
class NumberNode : public Node
{
  public:
    NumberNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** IDBRACK NODE TYPE **/
class IdBrackNode : public Node
{
  public:
    IdBrackNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
    int getDimension();
    string getId();
  private:
    int dimension;
};
#endif
