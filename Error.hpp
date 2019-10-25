#ifndef ERROR_HPP
#define ERROR_HPP

#include<iostream>
#include<string>

using std::string;
using std::endl;
using std::cout;

class Error 
{
  public:
    Error(int,int,string);
    void print();
  private:
    int line;
    int column;
    string lineStr;
    string printStr;
};

#endif
