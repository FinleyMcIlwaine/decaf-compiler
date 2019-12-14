/*
 * Node.cpp
 * Finley McIlwaine
 * Dec. 17, 2019
 * COSC4785, Program 6
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
  line=col=nextLine=nextCol=1;
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

void Node::setType(Type* t)
{
  myType=t;
}
void Node::setPotentialTypes(vector<Type*> pts)
{
  myPotentialTypes=pts;
}

Type* Node::getType()
{
  return myType;
}
vector<Type*> Node::getPotentialTypes()
{
  return myPotentialTypes;
}

void Node::setMySymbolTable(SymbolTable* st)
{
  mySymTab=st;
}
SymbolTable* Node::getMySymbolTable()
{
  return mySymTab;
}

TypeError* Node::typeCheck()
{
  this->checked=true;
  cout << "Base Node type check called? What'd you do?" << endl;
  return nullptr;
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
TypeError* VarDecNode::typeCheck()
{
  this->checked=true;
  // How to look this up?
  vector<Symbol*> myTypeSym = root->lookup(myVarSym->getType()->getBaseTypeString());
  if (myTypeSym.size()==0)
  {
    TypeError* te = new TypeError();
    te->
      withColNumber(myVarSym->getColNumber())->
      withLineNumber(myVarSym->getLineNumber())->
      withDesc("error: identifier '"+myVarSym->getType()->getBaseTypeString()+"' does not name a type.");
    myVarSym->kill();
    return te;
  }
  return nullptr;
}

void VarDecNode::setVarSymbol(Symbol* vs)
{
  myVarSym=vs;
}
Symbol* VarDecNode::getVarSymbol()
{
  return myVarSym;
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
TypeError* CtorStartNode::typeCheck()
{
  this->checked=true;
  if (myParameters)
  {
    vector<Symbol*> paramSyms;
    myParameters->buildArgSymbolList(&paramSyms);
    for (auto& p : paramSyms)
    {
      if (p->getType()->getBaseTypeString()=="int") continue;
      vector<Symbol*> typeSym = root->lookup(p->getType()->getBaseTypeString());
      if (typeSym.size()==0)
      {
        TypeError* te = new TypeError();
        te->
          withColNumber(p->getColNumber())->
          withLineNumber(p->getLineNumber())->
          withDesc("error: identifier '"+p->getType()->getBaseTypeString()+"' does not name a type.");
        methodTable->kill();
        methodSymbol->kill();
        return te;
      }
    }
  }
  return nullptr;
}
void CtorStartNode::setParameterListNode(Node* pln)
{
  myParameters=(ParameterListNode*) pln;
}
ParameterListNode* CtorStartNode::getParameterListNode()
{
  return myParameters;
}
void CtorStartNode::setMethodTable(SymbolTable* st)
{
  methodTable=st;
}
void CtorStartNode::setMethodSymbol(Symbol* s)
{
  methodSymbol=s;
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

/* METHOD DEC NODE DEFINITIONS */
MethodStartNode::MethodStartNode(Node *lf, Node *sec, Node* trd, Node *rt) 
  : Node(lf,rt) {
  second=sec;
  third=trd;
}
void MethodStartNode::print() {
  cout << "<MethodStart> --> " + sval << endl;
  if (left) left->print();
  if (second) second->print();
  if (third) third->print();
  if (right) right->print();
}
void MethodStartNode::setSecond(Node* sec)
{ 
  second = sec;
}
Node* MethodStartNode::getSecond()
{
  return second;
}
void MethodStartNode::setThird(Node* trd)
{ 
  third = trd;
}
Node* MethodStartNode::getThird()
{
  return third;
}
TypeError* MethodStartNode::typeCheck()
{
  this->checked=true;
  vector<Symbol*> myTypeSym = root->lookup(methodSymbol->getType()->getBaseTypeString());

  if (myTypeSym.size()==0 && methodSymbol->getType()->getBaseTypeString() != "int")
  {
    // Should delete the method table and all that good stuff
    TypeError* te = new TypeError();
    te->
      withColNumber(methodSymbol->getColNumber())->
      withLineNumber(methodSymbol->getLineNumber())->
      withDesc("error: identifier '"+methodSymbol->getType()->getBaseTypeString()+"' does not name a type.");
    methodTable->kill();
    methodSymbol->kill();
    return te;
  }

  if (myParameters)
  {
    vector<Symbol*> paramSyms;
    myParameters->buildArgSymbolList(&paramSyms);
    for (auto& p : paramSyms)
    {
      vector<Symbol*> typeSym = root->lookup(p->getType()->getBaseTypeString());
      if (typeSym.size()==0 && p->getType()->getBaseTypeString() != "int")
      {
        TypeError* te = new TypeError();
        te->
          withColNumber(p->getColNumber())->
          withLineNumber(p->getLineNumber())->
          withDesc("error: identifier '"+p->getType()->getBaseTypeString()+"' does not name a type.");
        methodTable->kill();
        methodSymbol->kill();
        return te;
      }
    }
  }
  return nullptr;
}
Symbol* MethodStartNode::getMethodSymbol()
{
  return methodSymbol;
}
SymbolTable* MethodStartNode::getMethodTable()
{
  return methodTable;
}
void MethodStartNode::setMethodSymbol(Symbol* s)
{
  methodSymbol=s;
}
void MethodStartNode::setMethodTable(SymbolTable* st)
{
  methodTable=st;
}
void MethodStartNode::setParameterListNode(Node* pln)
{
  myParameters=(ParameterListNode*) pln;
}
ParameterListNode* MethodStartNode::getParameterListNode()
{
  return myParameters;
}

/* PARAMETER LIST NODE */
void ParameterListNode::print() {
  cout << "<ParameterList> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}
void ParameterListNode::buildArgSymbolList(vector<Symbol*>* args)
{
  if (!right) args->push_back(((ParameterNode*)left)->getSymbol());
  else
  {
    ((ParameterListNode*)left)->buildArgSymbolList(args);
    args->push_back(((ParameterNode*)right)->getSymbol());
  }
}

/* PARAMETER NODE */
void ParameterNode::print() {
  cout << "<Parameter> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}
void ParameterNode::setSymbol(Symbol* s)
{
  mySymbol=s;
}
Symbol* ParameterNode::getSymbol()
{
  return mySymbol;
}

/* BLOCK NODE */
void BlockNode::print() {
  cout << "<Block> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

/* STMT BLOCK NODE */
StmtBlockNode::StmtBlockNode(Node *lf, Node *mi, Node *rt) 
  : Node(lf,rt) {
  middle=mi;
}
void StmtBlockNode::print() {
  cout << "<StmtBlock> --> " + sval << endl;
  if (left) left->print();
  if (middle) middle->print();
  if (right) right->print();
}

/* STMT BLOCK START NODE */
void StmtBlockStartNode::print() {
  cout << "<StmtBlockStart> --> " + sval << endl;
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
TypeError* NameNode::typeCheck()
{
  this->checked=true;
  TypeError* terr=nullptr;
  if (checkType=="identifier")
  {
    vector<Symbol*> symbolsWithName = mySymTab->lookup(identifier);
    if (symbolsWithName.size()==0)
    {
      terr=new TypeError();
      terr->
        withColNumber(col)->
        withLineNumber(line)->
        withDesc("error: identifier '"+identifier+
            "' does not exist in current scope.");
    } else if (symbolsWithName.size()==1) {
      this->setType(symbolsWithName.at(0)->getType());
    } else {
      vector<Type*> pts;
      for (int i=0; i<symbolsWithName.size(); i++)
      {
        pts.push_back(symbolsWithName.at(i)->getType());
      }
      this->setPotentialTypes(pts);
    }
  }
  else if (checkType=="ref_dot")
  {
    Type* nameType=left->getType();
    if (nameType)
    {
      // check if name type is a class type
      vector<Symbol*> typeSyms = root->lookup(nameType->getBaseTypeString());
      if (typeSyms.size()<1)
      {
        // Error about type not being a class with members
        terr=new TypeError();
        terr->
          withColNumber(col)->
          withLineNumber(line)->
          withDesc("error: type '"+nameType->getBaseTypeString()+
              "' does not have accessible members.");
      }
      else
      {
        vector<Symbol*> potSyms = typeSyms.at(0)->
          getType()->getSymbolTable()->lookup(right->getString());
        if (potSyms.size()==0)
        {
          // Error about not having member
          terr = new TypeError();
          terr->
            withColNumber(col)->
            withLineNumber(line)->
            withDesc("error: member '"+right->getString()+
                "' does not exist for type '"+
                typeSyms.at(0)->getType()->
                getBaseTypeString()+"'.");
        }
        else if (potSyms.size()==1)
        {
          // The member only has one potential type
          this->setType(potSyms.at(0)->getType());
        }
        else
        {
          // Multiple potential types for this thing
          vector<Type*> pts;
          for (int i=0; i<potSyms.size(); i++)
          {
            pts.push_back(potSyms.at(i)->getType());
          }
          this->setPotentialTypes(pts);
        }
      }
    }
    else
    {
      vector<Type*> potNameTypes = left->getPotentialTypes();
      // Look for ref type with dim >= 1 in pot types,
      // if exists, make that the name's type, otherwise
      // error
      bool typed=false;
      for (auto& t : potNameTypes)
      {
        vector<Symbol*> typeSyms = root->lookup(t->getBaseTypeString());
        if (typeSyms.size()==1)
        {
          vector<Symbol*> potSyms = typeSyms.at(0)->
            getType()->getSymbolTable()->lookup(right->getString());
          if (potSyms.size()==0)
          {
            // Error about not having member
            terr = new TypeError();
            terr->
              withColNumber(col)->
              withLineNumber(line)->
              withDesc("error: member '"+right->getString()+
                  "' does not exist for type '"+typeSyms.at(0)->getType()->
                  getBaseTypeString()+"'.");
          }
          else if (potSyms.size()==1)
          {
            // The member only has one potential type
            this->setType(potSyms.at(0)->getType());
          }
          else
          {
            // Multiple potential types for this thing
            vector<Type*> pts;
            for (int i=0; i<potSyms.size(); i++)
            {
              pts.push_back(potSyms.at(i)->getType());
            }
            this->setPotentialTypes(pts);
          }
        }
      }
      if (!typed)
      {
        terr = new TypeError();
        terr->
          withColNumber(col)->
          withLineNumber(line)->
          withDesc("error: identifier '"+left->getString()+
              "' does not have accessible members.");
      }
    } 
  }
  else if (checkType=="bexp")
  {
    Type* nameType=left->getType();
    if (nameType)
    {
      // check if name type is a ref type with dim >= 1
      if (nameType->getDimension()<1)
      {
        terr=new TypeError();
        terr->
          withColNumber(col)->
          withLineNumber(line)->
          withDesc("error: invalid indexing operation on zero-dimension type.");
      }
      else
      {
        Type* newType = new Type();
        newType->withBaseTypeString(nameType->getBaseTypeString())->
          withDimension(nameType->getDimension()-1)->
          withSymbolTable(nameType->getSymbolTable());
        // check if derived class here    
        if (nameType->getTypeType()=="method_type")
        {
          vector<string> args=((MethodType*)nameType)->getArgTypeList();
          ((MethodType*) newType)->withArgTypeList(args);
        }
        this->setType(newType);
      }
    }
    else
    {
      vector<Type*> potNameTypes = left->getPotentialTypes();
      // Look for ref type with dim >= 1 in pot types,
      // if exists, make that the name's type, otherwise
      // error
      bool typed=false;
      for (auto& t : potNameTypes)
      {
        if (t->getDimension()>0)
        {
          Type* newType = new Type();
          newType->withBaseTypeString(nameType->getBaseTypeString())->
            withDimension(nameType->getDimension()-1)->
            withSymbolTable(nameType->getSymbolTable());
          // check if derived class here    
          if (nameType->getTypeType()=="method_type")
          {
            vector<string> args=((MethodType*)nameType)->getArgTypeList();
            ((MethodType*) newType)->withArgTypeList(args);
          }
          this->setType(newType);
          typed=true;
        }
      }
      if (!typed)
      {
        terr=new TypeError();
        terr->
          withColNumber(col)->
          withLineNumber(line)->
          withDesc("error: identifier '"+left->getString()+"' cannot be indexed.");
      }
    }
  }
  return terr;
}

/* ARG LIST NODE DEFINITIONS */
void ArgListNode::print() {
  cout << "<ArgList> --> " + sval << endl;
  if (left) left->print();
  if (right) right->print();
}

TypeError* ArgListNode::typeCheck()
{
  TypeError* terr=nullptr;
  if (right)
  {
    terr=left->typeCheck();
    if (terr) return terr;
    terr=right->typeCheck();
  }
  else if (left)
  {
    terr=left->typeCheck();
    if (terr) return terr;
  }
  return terr;
}
void ArgListNode::buildArgTypeList(vector<Type*>* ts)
{
  if (!right && !left) return;
  if (!right) ts->push_back(left->getType());
  else
  {
    ((ArgListNode*)left)->buildArgTypeList(ts);
    ts->push_back(right->getType());
  }
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
TypeError* ExpNode::typeCheck()
{
  this->checked=true;
  TypeError* terr = nullptr;
  if (checkType=="name")
  {
    if (!left->checked)
    {
      terr=left->typeCheck();
      if (terr) return terr;
    }
    if (!left->getType())
    {
      terr=new TypeError();
      terr->
        withColNumber(col)->
        withLineNumber(line)->
        withDesc("error: invalid reference to ambiguous type.");
      return terr;
    }
    this->setType(left->getType());
    return nullptr;
  }
  if (checkType=="name_arglist")
  {
    if (left->getType())
    {
      MethodType* mType=(MethodType*)(left->getType());
      if (mType->getTypeType()=="ctor_type" || mType->getTypeType()=="type")
      {
        terr=new TypeError();
        terr->
          withColNumber(col)->
          withLineNumber(line)->
          withDesc("error: type '"+mType->getBaseTypeString()+
              "' is not of method type.");
      }
      else 
      {
        // Validate args
        terr=middle->typeCheck();
        if (terr) return terr;
        vector<Type*> ts;
        ((ArgListNode*)middle)->buildArgTypeList(&ts);
        if (ts.size() != mType->getArgTypeList().size())
        {
          int numArgs = mType->getArgTypeList().size();
          string strArgs=std::to_string(numArgs);
          terr=new TypeError();
          terr->
            withColNumber(col)->
            withLineNumber(line)->
            withDesc("error: method requires "+strArgs+
                " arguments.");
          return terr;
        }
        for (int i=0; i<ts.size(); i++)
        {
          if (ts.at(i)->getFullTypeString() !=
              mType->getArgTypeList().at(i))
          {
            terr=new TypeError();
            terr->
              withColNumber(col)->
              withLineNumber(line)->
              withDesc("error: expected type '"+mType->getArgTypeList().at(i)+
                  "', found '"+ts.at(i)->getFullTypeString()+"'.");
            return terr;
          }
        }
      }
    }
    else
    {
      // handle potential types
      vector<Type*> pTypes=((NameNode*)left)->getPotentialTypes();
      terr=middle->typeCheck();
      if (terr) return terr;
      vector<Type*> ts;
      ((ArgListNode*)middle)->buildArgTypeList(&ts);
      for (auto& t : pTypes)
      {
        if (ts.size() != ((MethodType*)t)->getArgTypeList().size())
        {
          continue;
        }
        for (int i=0; i<ts.size(); i++)
        {
          if (ts.at(i)->getFullTypeString() !=
              ((MethodType*)t)->getArgTypeList().at(i))
          {
            continue;
          }
          if (i==ts.size()-1)
          {
            Type* nt = new Type();
            nt->withBaseTypeString(t->getBaseTypeString())->
              withDimension(t->getDimension());
            this->setType(nt);
            return nullptr;
          }
        }
        if (ts.size()==0)
        {
          Type* nt = new Type();
          nt->withBaseTypeString(t->getBaseTypeString())->
            withDimension(t->getDimension());
          this->setType(nt);
          return nullptr;
        }
      }
      terr=new TypeError();
      terr->
        withColNumber(col)->
        withLineNumber(line)->
        withDesc("error: supplied method arguments do not match existing types.");
      return terr;
    }
  }
  else if (checkType=="newexp")
  {
    terr=left->typeCheck();
    if (terr) return terr;
    this->setType(left->getType());
    return nullptr;
  }
  else if (checkType=="unary")
  {
    terr=left->typeCheck();
    if (terr) return terr;
    Type* t=left->getType();
    if (t->getBaseTypeString()=="int" && t->getDimension()==0)
    {
      this->setType(t);
      return nullptr;
    }
    terr=new TypeError();
    terr->
      withColNumber(col)->
      withLineNumber(line)->
      withDesc("error: required type 'int', found type '"+
          t->getFullTypeString()+"'.");
    return terr;
  }
  else if (checkType=="eq")
  {
    terr=left->typeCheck();
    if (terr) return terr;
    terr=middle->typeCheck();
    if (terr) return terr;
    if ((left->getType()->getBaseTypeString()=="int" &&
        left->getType()->getDimension()==0) &&
        (middle->getType()->getBaseTypeString()!="int" ||
         middle->getType()->getDimension()!=0))
    {
      terr = new TypeError();
      terr->
        withColNumber(col)->
        withLineNumber(line)->
        withDesc("error: cannot compare types '"+
            left->getType()->getFullTypeString()+"' and '"+
            middle->getType()->getFullTypeString()+"'.");
      return terr;
    }
    if ((middle->getType()->getBaseTypeString()=="int" &&
        middle->getType()->getDimension()==0) &&
        (left->getType()->getBaseTypeString()!="int" ||
         left->getType()->getDimension()!=0))
    {
      terr = new TypeError();
      terr->
        withColNumber(col)->
        withLineNumber(line)->
        withDesc("error: cannot compare types '"+
            left->getType()->getFullTypeString()+"' and '"+
            middle->getType()->getFullTypeString()+"'.");
      return terr;
    }
    Type* nt = new Type();
    nt->withBaseTypeString("int")->
      withDimension(0);
    this->setType(nt);
    return nullptr;
  }
  else if (checkType=="arithmetic")
  {
    terr=left->typeCheck();
    if (terr) return terr;
    terr=middle->typeCheck();
    if (terr) return terr;
    if ((left->getType()->getBaseTypeString()!="int" ||
        middle->getType()->getBaseTypeString()!="int") ||
        (left->getType()->getDimension()!=0 ||
         middle->getType()->getDimension()!=0))
    {
      terr = new TypeError();
      terr->
        withColNumber(col)->
        withLineNumber(line)->
        withDesc("error: requires operand types 'int' and 'int', found types '"+
            left->getType()->getFullTypeString()+"' and '"+
            middle->getType()->getFullTypeString()+"'.");
      return terr;
    }
    Type* nt = new Type();
    nt->withBaseTypeString("int")->
      withDimension(0);
    this->setType(nt);
    return nullptr;
  }
  else if (checkType=="simple")
  {
    terr=left->typeCheck();
    if (terr) return terr;
    this->setType(left->getType());
  }
  return terr;
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
TypeError* NewExpNode::typeCheck()
{
  this->checked=true;
  TypeError* terr = nullptr;
  if (checkType=="id_arglist")
  {
    vector<Symbol*> ct = root->lookup(left->getString());
    if (ct.size()==0)
    {
      terr=new TypeError();
      terr->
        withColNumber(col)->
        withLineNumber(line)->
        withDesc("error: identifier '"+left->getString()+
          "' does not name a constructable type.");
        return terr;
    }
    // Validate args
    vector<CtorType*> pTypes=((ClassSymbol*)ct.at(0))->getCtorTypes();
    terr=middle->typeCheck();
    if (terr) return terr;
    vector<Type*> ts;
    ((ArgListNode*)middle)->buildArgTypeList(&ts);
    for (auto& t : pTypes)
    {
      if (ts.size() != t->getArgTypeList().size())
      {
        continue;
      }
      for (int i=0; i<ts.size(); i++)
      {
        if (ts.at(i)->getFullTypeString() !=
            t->getArgTypeList().at(i))
        {
          continue;
        }
        if (i==ts.size()-1)
        {
          Type* t = new Type();
          t->withBaseTypeString(left->getString())->
            withDimension(0)->
            withSymbolTable(ct.at(0)->getType()->getSymbolTable());
          this->setType(t);
          return nullptr;
        }
      }
      if (ts.size()==0)
      {
        Type* t = new Type();
        t->withBaseTypeString(left->getString())->
          withDimension(0)->
          withSymbolTable(ct.at(0)->getType()->getSymbolTable());
        this->setType(t);
        return nullptr;
      }
    }
    terr=new TypeError();
    terr->
      withColNumber(col)->
      withLineNumber(line)->
      withDesc("error: a constructor with matching type does not exist.");
  }
  return terr;
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
