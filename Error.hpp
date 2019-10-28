/*
 * Error.hpp
 * Finley McIlwaine
 * Oct. 27, 2019
 * COSC4785, Program 3
 *
 * Declaration of the Error class
*/

#ifndef ERROR_HPP
#define ERROR_HPP
#include<iostream>
#include<string>

using std::string;
using std::endl;
using std::cout;
using std::to_string;

class Error 
{
  public:
    Error* withColNumber(int);
    Error* withLineNumber(int);
    Error* withErrLine(string);
    Error* withDesc(string);
    void print();
    string getErrLine();
    int getLine();
    int getColumn();
  private:
    int numSpaces();
    int line;
    int column;
    string errLine;
    string description;
};
#endif
