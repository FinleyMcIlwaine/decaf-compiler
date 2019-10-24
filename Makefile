# Makefile
# Finley McIlwaine
# COSC 4785 Fall 2019
# Program 03
# October 6, 2019

CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare -std=c++11
LEXXX=flex++
LFLAGS=--warn
YACC=bison
YFLAGS=--report=state -W -d -v

all: prog3

.PHONY: clean tarball

program3_lex.cpp: program3.lpp node.hpp
	@echo -e "\\n"
	${LEXXX} ${LFLAGS} program3.lpp

program3.tab.hpp: program3.ypp node.hpp
	@echo -e "\\n"
	${YACC} ${YFLAGS} program3.ypp

prog3:  program3.tab.hpp program3.tab.cpp node.hpp node.cpp program3_lex.cpp program3.cpp
	@echo -e "\\n"
	${CXX} ${CXXFLAGS} program3.tab.cpp program3.cpp node.cpp program3_lex.cpp -o program3
	@echo -e "\\n"

tidy:
	/bin/rm -f a.out core.* program3.tab.* program3.output program3_lex.cpp

clean: tidy
	        /bin/rm -f program3 

tarball:
	        tar cf program.tar Makefile node.hpp program3.lpp program3.ypp program3.cpp

