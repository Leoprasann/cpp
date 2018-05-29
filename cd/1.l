%{
#include<stdio.h>
//#include "lex.yy.c"
%}

character [a-z]
digit [0-9]
blank [ ]
eol [\n]
tab [\t]
declaration (int|float|double|bool)[ ]+([a-z]+)(;)[\n]*
%%
{declaration} {
			printf("Parsed a declaration\n");
			}
. {printf("not matched:%s",yytext);}
%%

void main(int argc, char** argv)
{
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

