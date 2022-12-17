/* C Declarations */

%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #include<string.h>
    #include "1807112.tab.h"     /*header for token defination*/    
    extern YYSTYPE yylval;
     void InvalidToken();
    
%}

/* Token Definations */
header  "import ".*
commentSingle      [ ]*[~][^\n]*
commentMulti       "##"[^##]*"##"
%option yylineno


/*REGULAR EXPRESSIONS defining the tokens for the R language */

%%
{commentSingle}         {printf("-------------------this is single line comment-----------------\n");}
{commentMulti}          {printf("-------------------this is multi line comment------------------\n");}
"int"   {return INT;}
"float" {return FLOAT;}
"char"  {return CHAR;}
[0-9]+  {
        yylval = atoi(yytext);
        return NUM;
        }
[a-zA-Z]   {
        yylval = *yytext - 'a';
        return VAR;
        }
[-+/*<>=,():;%^!]    {
                    yylval = yytext[0];	
                    return  *yytext;	
                    }
"IF"    {return IF;}
"ELSE"  {return ELSE;}
"ELIF"  {return ELIF;}
"SWITCH"    {return SWITCH;}
"CASE"      {return CASE;}
"DEFAULT"   {return DEFAULT;}
"{"     {return LB;}
"}"     {return RB;}
"print" {return PRINT;}
"BREAK" {return BREAK;}
"FOR"   {return FOR;}
"SIN"   {return SIN;}
"COS"   {return COS;}
"TAN"   {return TAN;}
"ARRAY" {return ARRAY;}
"OE"    {return OE;}
"ISPRIME"       {return ISPRIME;}
"FIBSERIES"     {return FIBSERIES;}
"FACTORS"       {return FACTORS;}
"WHILE"         {return WHILE;}
[#].*   {
        ECHO;printf("\n");
        }
{header}    {
            printf("\nHeader file found :\n");ECHO;printf("\n");
            }
"root"      {return ROOT;}
[\n]*       {}
[\t]*       {}
[ ]*	    {}
.           {printf("%s --> Unknown Input\n",yytext);}

%%



int yywrap()
{
	return 1;
}
void InvalidToken(){
    printf("Invalid Token and error line no: %d", yylineno); //that maintains the number of the current line read from its input in the global variable yylineno. 
}

int main()
{
	freopen("1807112_input.txt","r",stdin);
	freopen("1807112_output.txt","w",stdout);
	yyparse();
    
	return 0;
}