%{
#include<stdio.h>
//#include "lex.yy.c"
%}

character [a-z]
digit [0-9]
blank [ ]
eol [\n]
tab [\t]

functiondec (int|bool|float|double)([ ])*(.)*("(")(.)*(")")(;)

functiondef (int|bool|float|double)([ ])*(.)*("(")(.)*(")")("{")(.)*("}")

functioncall ([a-z])*("(")(.)*(")")(;)
%%
{functiondec}|{functiondef}|{functioncall} {

			printf("Parsed a declaration\n");
			}
. {printf("not matched:%s",yytext);}
%%

void main(int argc, char** argv)
{
//forloop (for)('(')(.)(;)(.)(;)(.)(')')({).(})

yyin=fopen("a.c","r");
yylex();
}
/*void main()
{

}*/

int yywrap()
{
return 1;
}

