# Makefile
# Finley McIlwaine
# Nov. 10, 2019
# COSC 4785 Program 4

CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare -std=c++11
LEXXX=flex++
LFLAGS=--warn
YACC=bison
YFLAGS=--report=state -W -d -v

all: program4

.PHONY: clean tarball

lexer: Node.hpp MyScanner.hpp Error.hpp
	${LEXXX} ${LFLAGS} program4.lpp

parser: Node.hpp Error.hpp
	${YACC} ${YFLAGS} program4.ypp

program4: parser lexer program4.tab.hpp MyScanner.hpp Node.hpp
	${CXX} ${CXXFLAGS} program4.tab.cpp program4_lex.cpp program4.cpp \
		Node.cpp MyScanner.cpp Error.cpp -o program4

tidy:
	/bin/rm -rf a.out core.* program4.tab.* program4.output \
		program4_lex.cpp tarball

clean: tidy
	/bin/rm -rf program4

tarball:
	rm -rf tarball
	mkdir tarball
	tar cf ./tarball/program4.tar Makefile Node.hpp Node.cpp MyScanner.hpp\
			MyScanner.cpp Error.hpp Error.cpp program4.lpp\
			program4.ypp program4.cpp

