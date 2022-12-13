# **Compile and run - LEX**
```
  flex(lex) filename.l
  gcc lex.yy.c -o filename
  ./filename
```
# **Compile and run - YACC**
```
  flex(lex) filename.l
  yacc filename.y
  gcc y.tab.c -o filename
  ./filename
```  
  OR
```  
  flex(lex) filename.l
  bison filename.y
  gcc filename.tab.c -o filename
  ./filename
```  
## **Cycle 1 - Application problems using DFA**
  1. Design and implement a lexical analyzer using C language to recognize valid tokens 
(identifiers, keywords, operators, constants etc. . .) in the input C program. The 
lexical analyzer should ignore redundant spaces, tabs and newlines. It should also 
ignore comments. 
2. Design and implement a DFA to recognize strings defined over {a, b} that contains 
even numenr of a’s and b’s. 
3. Design and implement a DFA to recognize strings defined over {a, b} that contains 
abab as sub-string. 
4. Design and implement a DFA to recognize valid identifiers of C language. 
5. Design and implement a DFA to check whether the given decimal number is divisible 
by 3.

## **Cycle 2 - Study of LEX (A Lexical Analyzer Generator)**
 1. Study of the Lexical Analyzer Generator (LEX). 
2. Write a LEX program to recognize the strings defined over Σ = {a, b} those start with ab. 
3. Write a LEX program to recognize the strings defined over Σ = {a, b} those start with ab 
and contains an even number of a’s. 
4. Write a LEX program to recognize the strings defined over Σ = {a, b} those contains equal 
number of ab and ba. 
5. Write a LEX program to classify the characters in a given text in to uppercase or lower 
case letters, digits, special characters etc,. 
6. Write a LEX program to recognize valid identifiers of C language. 
7. Write a LEX program to recognize a valid variable declaration of C language. 
8. Write a LEX program to count the number of lines, words and characters in a given file. 
9. Write a LEX program to recognize (and ignore) the comments in a C program. 
10. Design and implement a lexical analyzer using LEX to recognize valid tokens (identifiers, 
keywords, operators, constants etc. . .) in the input C program. The lexical analyzer should 
ignore redundant spaces, tabs and newlines. It should also ignore comments.

## **Cycle 3 - Parsing**
1. Study of the Parser Generator (YACC). 
2. Write a program to recognize a valid arithmetic expression that uses the operators +, -, * and / using YACC. 
3. Write a YACC program to evaluate an expression. 
4. Write a program to implement a calculator using LEX and YACC. 
5. Write a program to find FIRST and FOLLOW of any given grammar. 
6. Write a recursive descent parser for the grammar \
E → T E' \
E' → +T E' | e \
T → F T' \
T' → ∗F T' | e \
F → ( E ) | id 
7. Write a program to construct a recursive descent parser for an arithmetic expression that uses the operators 
+, -, * and /. 
8. Write a program to construct a shift reduce parser for a given language. 
9. *Write a C program to construct an LL (1) parsing table and simulate LL(1) parsing . 
10. *Construct an SLR parsing table for the grammar given below and show the parser actions on the string 
id+(id). \
E → E + T \
E → T \
T → ( E ) \
T → id 
11. *Construct a CLR (CALR) parsing table for the grammar given below and show the parser actions on the 
string ccdd. \
S → C C \
C → c C \
C → d 
12. *Write a C program to design LALR Bottom up Parser. 
13. *Write a C program to implement operator precedence parsing. 
14. *Draw the operator precedence table for the grammar and perform operator precedence parsing on the string -
id * ( id + id ) / ( id - id ) \
E → E + E | E − E | E ∗ E | E / E | ( E ) | id
