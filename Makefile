# Makefile
# Finley McIlwaine
# Oct. 27, 2019
# COSC 4785 Program 3

CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare -std=c++11
LEXXX=flex++
LFLAGS=--warn
YACC=bison
YFLAGS=--report=state -W -d -v

all: program3

.PHONY: clean tarball

lexer: Node.hpp MyScanner.hpp Error.hpp
	${LEXXX} ${LFLAGS} program3.lpp

parser: Node.hpp Error.hpp
	${YACC} ${YFLAGS} program3.ypp

program3: parser lexer program3.tab.hpp MyScanner.hpp Node.hpp
	${CXX} ${CXXFLAGS} program3.tab.cpp program3_lex.cpp program3.cpp \
		Node.cpp MyScanner.cpp Error.cpp -o program3

tidy:
	/bin/rm -rf a.out core.* program3.tab.* program3.output \
		program3_lex.cpp tarball

clean: tidy
	/bin/rm -rf program3 tarball

tarball:
	rm -rf tarball
	mkdir tarball
	tar cf ./tarball/program3.tar Makefile Node.hpp Node.cpp MyScanner.hpp\
			MyScanner.cpp Error.hpp Error.cpp program3.lpp
			program3.ypp program3.cpp

