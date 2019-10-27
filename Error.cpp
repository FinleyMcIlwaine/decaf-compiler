

#include "Error.hpp"

Error* Error::withColNumber(int col)
{
  column=col;
  return this;
}
Error* Error::withLineNumber(int ln)
{
  line=ln;
  return this;
}
Error* Error::withErrLine(string ln)
{
  errLine=ln;
  return this;
}
Error* Error::withDesc(string desc)
{
  description=desc;
  return this;
}
void Error::print()
{
  cout << endl << line << ":" << column << " : " << errLine << endl;
  for(int i=0,j=numSpaces();i<j;i++)
  {
    cout << " ";
  }
  cout << "^" << endl;
  cout << description << endl << endl;
}

int Error::numSpaces()
{
  return 3+
    to_string(line).length()+
    to_string(column).length()+
    column;
}

string Error::getErrLine()
{
  return errLine;
}
int Error::getLine()
{
  return line;
}
int Error::getColumn()
{
  return column;
}
