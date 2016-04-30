all:

	lex ./src/lexer.l
	yacc -d ./src/parser.y
	g++ -c lex.yy.c y.tab.c
	g++ -o ./bin/output lex.yy.o y.tab.o -ll
	g++ ./src/codegen.cpp -o ./bin/codegen
	chmod a+x ./bin/codegen

	export PATH=$PATH:./bin/

clean: 
	rm ./bin/* lex.yy.c y.tab.h y.tab.c lex.yy.o y.tab.o
