/*Lex Scanner file*/

/* Keywords Lexemes*/
%%
bool {return BOOLT;}
char {return CHART;}
int {return INTT;}
real {return REALT;}    
string {return STRINGT;}
int\* {return INTP;}
char\* {return CHARP;}
real\* {return REALP;}
if {return IF;}
else {return ELSE;}
while {return WHILE;}
var {return VAR;}
func {return FUNC;}
proc {return PROC;}
return {return RETURN;}
null {return NULLL;}


"&&" {yylval = yytext; return AND;}
"/" {yylval = yytext; return DIVIDE;}
"=" {yylval = yytext; return ASIGN;}
"==" yylval = yytext; {return COMPARE;}
">" {yylval = yytext; return GREATER;}
">=" {yylval = yytext; return GREATEREQUAL;}
"<" {yylval = yytext; return LESS;}
"<=" {yylval = yytext; return LESSEQUAL;}
"-" {yylval = yytext; return MINUS;}
"!" {yylval = yytext; return NOT;}
"!=" {yylval = yytext; return NOTEQUAL;}
"||" {yylval = yytext; return OR;}
"+" {yylval = yytext; return PLUS;}
"*" {yylval = yytext; return MULTIPLY;}
"&" {yylval = yytext; return ADDRESS;}
"^" {yylval = yytext; return DEFERENCE;}

"["	{return OINDEX;}
"]" {return CINDEX;}
"{"	{return OBLOCK;}
"}"	{return CBLOCK;}
"("	{return OLIST;}
")"	{return CLIST;}
"|"	{return ABSOLUTE;} 
","	{return COMMA;}
":" {return COLONS;}
";" {return ENDLINE;}

\/\%([^%]|[\r\n]|(\%([^%/]|[\r\n])))*\%+\/ {}


true	{return BOOLEANTRUE;}	
false {return BOOLEANFALSE;}													
\'.\'   {yylval = yytext; return CHAR;}
[\-]?[1-9][0-9]* {yylval = yytext; return INTEGER;}
[\-]?[0-9]*[.]?[0-9]*	{yylval = yytext; return REAL;}
[A-Za-z][a-zA-Z0-9_]* {yylval = strdup(yytext); return IDENTIFIER;}
\"([^\\"]|\\.)*\"		{yylval = yytext; return STRING;}
[\n] {yylineno++;}
[ \t]+ ;
.	return yytext[0];
%%