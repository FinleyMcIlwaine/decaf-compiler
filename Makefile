# Makefile
# Finley McIlwaine
# Nov. 26, 2019
# COSC 4785 Program 5

CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare -std=c++11
LEXXX=flex++
LFLAGS=--warn
YACC=bison
YFLAGS=--report=state -W -d -v

all: program5

.PHONY: clean tarball

lexer: Node.hpp MyScanner.hpp Error.hpp
	${LEXXX} ${LFLAGS} program5.lpp

parser: Node.hpp Error.hpp
	${YACC} ${YFLAGS} program5.ypp

program5: parser lexer program5.tab.hpp MyScanner.hpp Node.hpp
	${CXX} ${CXXFLAGS} program5.tab.cpp program5_lex.cpp program5.cpp \
		SymbolTable.cpp Node.cpp MyScanner.cpp Error.cpp -o program5

tidy:
	/bin/rm -rf a.out core.* program5.tab.* program5.output \
		program5_lex.cpp tarball

clean: tidy
	/bin/rm -rf program5

tarball:
	rm -rf tarball
	mkdir tarball
	tar cf ./tarball/program5.tar Makefile Node.hpp Node.cpp MyScanner.hpp\
			MyScanner.cpp Error.hpp Error.cpp program5.lpp\
			program5.ypp program5.cpp

