#ifndef MSCANNER_H
#define MSCANNER_H

#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

class MyScanner : public yyFlexLexer
{
  public:
        virtual int yylex();
        char* val;
};

#endif
