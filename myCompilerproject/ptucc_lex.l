%{
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "ptucc_parser.tab.h"
#include "cgen.h"
int line_num = 1;

/* 
	A primitive macro facility:
	just one macro is allowed to be defined! 
*/
#define MAXMACRO 32
char* mactable[MAXMACRO][2];
int mactable_size = 0;

/* Return 1 on success, 0 on failure (macro table full) */
int set_macro(char* name, char* def);

/* Return def for macro, or NULL if no such macro is defined. */
char* get_macro(char* name);

%}

ID 			[a-zA-Z_][0-9a-zA-Z_]*
DIGIT  		[0-9]
NUMBER  	{DIGIT}{DIGIT}*
DECIMAL 	("."{NUMBER})|({NUMBER}("."{NUMBER}?)?)
REAL    	{DECIMAL}([eE][+-]?{NUMBER})?

spec_1      ("\\n"|"\\t"|"\\r"|"\\\\"|"\\\'")
spec_2      ("\\n"|"\\t"|"\\r"|"\\\\"|"\\\"")
puncts 		("!"|"@"|"#"|"$"|"%"|"^"|"&"|"*"|"?"|":"|"."|"("|")"|"+"|"-"|"="|"/")
text     	([A-Z]|[a-z]|[0-9]|" "|{puncts})

STR_1  ("\"")({text}*{spec_1}*{text}*)*("\"")
STR_2  ("\'")({text}*{spec_2}*{text}*)*("\'")
STRING {STR_1}|{STR_2}


%x comment
%x macro

%%
program             	{return KW_PROGRAM;}
begin               	{return KW_BEGIN;}
end                 	{return KW_END;}
and               	{return KW_AND;}
array               	{return KW_ARRAY;}
boolean             	{return KW_BOOL;}
char                	{return KW_CHAR;}
div               	{return KW_DIV;}
do               	{return KW_DO;}
else               	{return KW_ELSE;}
for               	{return KW_FOR;}
function           	{return KW_FUNCTION;}
goto               	{return KW_GOTO;}
if               	{return KW_IF;}
integer             	{return KW_INTEGER;}
var               	{return KW_VAR;}
mod               	{return KW_MOD;}
not               	{return KW_NOT;}
of               	{return KW_OF;}
or               	{return KW_OR;}
while               	{return KW_WHILE;}
procedure           	{return KW_PROCEDURE;}
real               	{return KW_REAL;}
repeat            	{return KW_REPEAT;}
to               	{return KW_TO;}
type               	{return KW_TYPE;}
result              	{return KW_RESULT;}
return              	{return KW_RETURN;}
then               	{return KW_THEN;}
until               	{return KW_UNTIL;}
downto              	{return KW_DOWNTO;}
"+"              	{return OP_PLUS;}	
"-"              	{return OP_MINUS;}	
"*"         	    	{return OP_MULT;}	
"/"              	{return OP_DIV;}	
"="              	{return CMP_EQUAL;}	
"<>"             	{return CMP_NOTEQUAL;}	
"<"              	{return CMP_LESS;}	
"<="              	{return CMP_LESSEQUAL;}	
">"              	{return CMP_GREATER;}	
">="              	{return CMP_GREATEREQUAL;}	
"&&"             	{return LOG_AND;}	
"||"              	{return LOG_OR;}	
"!"              	{return LOG_NOT;}	
":="              	{return ASSIGNMENT;}	
";"              	{return DEL_SEMICOLON;}	
"("              	{return DEL_LEFTPAR;}	
")"              	{return DEL_RIGHTPAR;}	
","             	{return DEL_COMMA;}	
"["              	{return DEL_SQRLEFT;}	
"]"              	{return DEL_SQRRIGHT;}	
":"              	{return DEL_COLON;}
"."              	{return DEL_DOT;}						  		
true                	{return BOOL_TRUE;}
false               	{return BOOL_FALSE;}					  				  
"readString"        	{return FUNC_RDSTR;}
"readInteger"       	{return FUNC_RDINT;}
"readReal"          	{return FUNC_RDREAL;}
"writeString"       	{return FUNC_WRSTR;}
"writeInteger"      	{return FUNC_WRINT;}
"writeReal"         	{return FUNC_WRREAL;}
@defmacro[ \r\t]+       BEGIN(macro);
<macro>{ID}             {
							/* Store macro name */
							char* name = strdup(yytext);
							char* def = NULL;
							size_t deflen = 0;
							char c;

							FILE* deff = open_memstream(&def, &deflen);

							while((c=input())!='\n')
							   fputc(c, deff);
							fclose(deff);

							if(!set_macro(name, def))
								yyerror("lexer error: failed to define macro '%s'\n", name);
							BEGIN(INITIAL);
						};


{ID}  					{
						   char* def = get_macro(yytext);
						   if(def==NULL) {
						   		yylval.crepr = strdup(yytext);
						   		//printf("return function IDENT: %s\n", yytext);
						   		return IDENT;
						   	}
						   for(int i=strlen(def); i>0; i--) {
						   	  unput(def[i-1]);
						   }
						} 						
{NUMBER}				{ yylval.crepr = strdup(yytext); return POSINT; }
{REAL}					{ yylval.crepr = strdup(yytext); return REAL; }
{STRING}				{ yylval.crepr = strdup(yytext); return STRING; }

"(*"					BEGIN(comment);
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*)\n]*   /* eat up '*'s not followed by ')'s */
<comment>\n             ++line_num;
<comment>"*"+")"        BEGIN(INITIAL);


[ \r\t]					/* skip whitespace */
\n 						++line_num;
<<EOF>> 				return EOF;

.        { yyerror("lexical error: unrecognized literal '%s'\n", yytext); }


%%

int set_macro(char* name, char* def)
{
	/* Check to see if macro already defined, and redefine it. */
	int i;
	for(i=0; i<mactable_size; i++) {
		if(strcmp(mactable[i][0], name)==0) {
			/* found ! */
			free(name);
			free(mactable[i][1]);
			mactable[i][1] = def;
			break;
		}
	}
	if(i<mactable_size)
		return 1;
	else if(mactable_size < MAXMACRO) {
		/* new entry */
		assert(i==mactable_size);
		mactable[i][0] = name;
		mactable[i][1] = def;
		mactable_size++;
		return 1;
	}
	else
		return 0;
}

char* get_macro(char* name)
{
	for(int i=0;i<mactable_size; i++) {
		if(strcmp(mactable[i][0], name)==0)
			return mactable[i][1];
	}
	return NULL;
}


