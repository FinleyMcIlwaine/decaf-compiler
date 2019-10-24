// node.hpp
// Finley McIlwaine
// COSC 4785
// program3
// Professor Buckner

#ifndef NODE_HPP
#define NODE_HPP

#include<iostream>
#include<string>

using std::string;
using std::endl;
using std::cout;

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
  protected:
    int yyline;
    int yycol;
    int ival;
    double dval;
    string sval;
    int nextCol;
    int nextLine;
    Node *left, *right;
};

/** NAME NODE TYPE **/
class NameNode : public Node
{
  public:
    NameNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
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
};

/** BRACKETEXP and BRACKETEXPS NODE TYPE **/
class BracketExpNode : public Node
{
  public:
    BracketExpNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

class BracketExpsNode : public Node
{
  public:
    BracketExpsNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** EXP NODE TYPE **/
class ExpNode : public Node
{
  public:
    ExpNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** NUMBER NODE TYPE **/
class NumberNode : public Node
{
  public:
    NumberNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** TYPE NODE TYPE **/
class TypeNode : public Node
{
  public:
    TypeNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** SIMPLETYPE NODE TYPE **/
class SimpleTypeNode : public Node
{
  public:
    SimpleTypeNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** NEWEXP NODE TYPE **/
class NewExpNode : public Node
{
  public:
    NewExpNode(Node *lf=0, Node *mi=0, Node *rt=0);
    void print();
    void setMiddle(Node *mi);
    Node* getMiddle();
  private:
    Node *middle;
};

/** VARDEC NODE TYPE **/
class VarDecNode : public Node
{
  public:
    VarDecNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** ELEMENTS NODE TYPE **/
class ElementsNode : public Node
{
  public:
    ElementsNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};

/** PROGRAM NODE TYPE **/
class ProgramNode : public Node
{
  public:
    ProgramNode(Node *lf=0, Node *rt=0) : Node(lf,rt) {}
    void print();
};
#endif
