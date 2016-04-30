# Java-Mips-Compiler Final project
1. This folder contains lexer.l ,codegen.cpp and parser.y file in src folder, 5 tests files 	in test folder for front end.
2. Each test file is named testX.java where X is from 1 to 5.
3. We have inplemented simple expressions, arrays and switch.
4. We have implemented liveness checking,leaders,basic blocks etc.
5. Test cases for frontend are in test folders which are generating test cases for backend in 	asgn4 folder.
6.Our grammar is  working correctly and showing no conflict. 
7. We have implemented following grammars with no conflict. 
 program class statement expression variabledecl listofvars ifelse condition relationalexp forloop whileloop function parameters  return continue break  listofstatement switch caselist case vartype
8. 3-address code is being generated for expressions , relational expression  , expessiona  inside switch statements.
8.To run the assignment,run following commands in order.
- cd asgn4/
Commands:
make clean 
make
for  each test case X run following command  e.g for x = 5;
1) ./bin/output ./test/test5.java > test5.ir   (it will write 3-address code in fileX.java)
2) ./bin/codegen testX.ir  (will display generate machine code and intermediate step like leaders(basic blocks), live variable analysis e.g )


Group 26
Abhay Kumar	 11008
Prem Nath Bharti 11538
Anurag Kumar 	 11138
Prashant Kumar   11525

