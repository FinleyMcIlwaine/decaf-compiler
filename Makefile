# Makefile
# Finley McIlwaine
# Dec. 17, 2019
# COSC 4785 Program 6

CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare -std=c++11
LEXXX=flex++
LFLAGS=--warn
YACC=bison
YFLAGS=--report=state -W -d -v

all: program6

.PHONY: clean tarball

lexer: Node.hpp MyScanner.hpp Error.hpp
	${LEXXX} ${LFLAGS} program6.lpp

parser: Node.hpp Error.hpp
	${YACC} ${YFLAGS} program6.ypp

program6: parser lexer program6.tab.hpp MyScanner.hpp Node.hpp \
	SymbolTable.hpp
	${CXX} ${CXXFLAGS} program6.tab.cpp program6_lex.cpp program6.cpp \
		Symbol.cpp SymbolTable.cpp Node.cpp MyScanner.cpp Error.cpp \
		Type.cpp TypeTable.cpp -o program6

tidy:
	/bin/rm -rf a.out core.* program6.tab.* program6.output \
		program6_lex.cpp tarball

clean: tidy
	/bin/rm -rf program6

tarball:
	rm -rf tarball
	mkdir tarball
	tar -cf ./tarball/program6.tar Makefile Node.hpp Node.cpp MyScanner.hpp \
			MyScanner.cpp Error.hpp Error.cpp Type.cpp Type.hpp \
			TypeTable.cpp TypeTable.hpp Symbol.hpp Symbol.cpp \
			SymbolTable.hpp SymbolTable.cpp \
			program6.lpp program6.ypp program6.cpp

