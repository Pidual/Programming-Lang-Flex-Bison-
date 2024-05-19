#!/bin/bash

rm syntactic.tab.* syntactic.output lex.yy.c main.exe

bison -d -v syntactic.y
flex lexical.l
gcc syntactic.tab.c lex.yy.c -lfl -o main.exe

./main.exe  test.x
