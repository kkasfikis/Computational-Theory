%{
#include <stdarg.h>
#include <stdio.h>	
#include "cgen.h"

extern int yylex(void);
extern int line_num;
%}

%union
{
	char* crepr;
}


%token <crepr> IDENT
%token <crepr> POSINT 
%token <crepr> REAL 
%token <crepr> STRING

%token KW_PROGRAM 
%token KW_BEGIN 
%token KW_END
%right KW_AND
%token KW_ARRAY
%token KW_BOOL
%token KW_CHAR
%token KW_TYPE
%left KW_DIV
%token KW_DO

%token KW_FOR
%token KW_FUNCTION
%token KW_GOTO
%right KW_IF
%token KW_INTEGER
%token KW_VAR
%left KW_MOD
%right KW_NOT
%token KW_OF
%left KW_OR
%token KW_WHILE
%token KW_PROCEDURE
%token KW_REAL
%token KW_REPEAT
%token KW_TO
%token KW_RESULT
%token KW_RETURN
%left KW_THEN
%left KW_ELSE
%token KW_UNTIL
%token KW_DOWNTO
%left OP_PLUS
%left OP_MINUS
%left OP_MULT
%left OP_DIV
%left CMP_EQUAL
%left CMP_NOTEQUAL
%left CMP_LESS
%left CMP_LESSEQUAL
%left CMP_GREATER
%left CMP_GREATEREQUAL
%left LOG_AND
%right LOG_NOT
%left LOG_OR
%token ASSIGNMENT
%token DEL_SEMICOLON
%token DEL_LEFTPAR
%token DEL_RIGHTPAR
%token DEL_COMMA
%token DEL_SQRLEFT
%token DEL_SQRRIGHT
%token DEL_COLON
%token DEL_DOT
%token FUNC_RDSTR
%token FUNC_RDINT
%token FUNC_RDREAL
%token FUNC_WRSTR
%token FUNC_WRINT
%token FUNC_WRREAL
%token BOOL_TRUE
%token BOOL_FALSE


%right NOT
%right UPLUS_UMINUS
%right CAST
%left FACTORS
%left PLUS_MINUS
%left RELATIONAL
%left LOGICAL_AND
%left LOGICAL_OR
%right PAR

%type <crepr> program_decl
%type <crepr> function_procedure_start_contents
%type <crepr> function
%type <crepr> function_header
%type <crepr> procedure
%type <crepr> procedure_header
%type <crepr> program_function_procedure_start_contents
%type <crepr> function_procedure_param
%type <crepr> function_procedure_call
%type <crepr> function_procedure_call_params
%type <crepr> basic_data_types
%type <crepr> data_types
%type <crepr> array_size_declaration
%type <crepr> typedef_declaration
%type <crepr> variable_declaration
%type <crepr> single_plural_ident
%type <crepr> read_string
%type <crepr> read_integer
%type <crepr> read_real
%type <crepr> write_string
%type <crepr> write_integer
%type <crepr> write_real
%type <crepr> expressions
%type <crepr> complex_command_content
%type <crepr> complex_commands
%type <crepr> distinct_commands
%type <crepr> statement_commands_contents
%type <crepr> assignment_command
%type <crepr> result_command
%type <crepr> if_command
%type <crepr> for_command
%type <crepr> while_command
%type <crepr> repeat_command
%type <crepr> label_command
%type <crepr> goto_command
%type <crepr> return_command
%type <crepr> array_expression
%type <crepr> array_sqr_content
%type <crepr> casting
%type <crepr> function_complex_commands

%start program

%%
program:  program_decl program_function_procedure_start_contents complex_commands  DEL_DOT   		
{ 
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* program  %s */\n#include <stdio.h> \n#include <stdlib.h> \n #include <string.h> \n\n%s\nint main(){%s} \n", $1,$2,$3);
	}
};
program_decl : KW_PROGRAM IDENT DEL_SEMICOLON  	{ $$ = $2; };

program_function_procedure_start_contents :	{$$=template("");} 	
						|program_function_procedure_start_contents variable_declaration	{$$=template("%s %s",$1,$2);}
						|program_function_procedure_start_contents typedef_declaration	{$$=template("%s %s",$1,$2);}
					    	|program_function_procedure_start_contents function 		{$$=template("%s %s",$1,$2);}
						|program_function_procedure_start_contents procedure		{$$=template("%s %s",$1,$2);};

/*------------------------FUNCTION/PROCEDURE-----------------------------------------------------------------------------------*/
function: function_header function_procedure_start_contents function_complex_commands DEL_SEMICOLON{$$=template("\n%s\n %s\n %s}",$1,$2,$3);};
function_procedure_start_contents : 		{$$=template("");}  	
						|function_procedure_start_contents variable_declaration	{$$=template("%s %s",$1,$2);}
					    	|function_procedure_start_contents function 		{$$=template("%s %s",$1,$2);}
						|function_procedure_start_contents procedure		{$$=template("%s %s",$1,$2);};
function_header: KW_FUNCTION IDENT DEL_LEFTPAR function_procedure_param DEL_RIGHTPAR DEL_COLON data_types DEL_SEMICOLON{$$=template("%s %s(%s)\n{\n%s result;",$7,$2,$4,$7);};
procedure : procedure_header function_procedure_start_contents complex_commands DEL_SEMICOLON{$$=template("\n%s\n{%s\n%s}",$1,$2,$3);};
				
procedure_header: KW_PROCEDURE IDENT DEL_LEFTPAR function_procedure_param DEL_RIGHTPAR DEL_SEMICOLON{$$=template("void %s(%s)",$2,$4);};
function_procedure_param: 	{$$=template("");} 
				|IDENT DEL_COLON basic_data_types{$$=template("%s %s",$3,$1);}
				|IDENT DEL_COLON KW_ARRAY array_size_declaration KW_OF basic_data_types{$$=template("%s %s%s",$6,$1,$4);}
				|IDENT DEL_COLON KW_ARRAY KW_OF basic_data_types{$$=template("%s* %s",$5,$1);}
				|IDENT DEL_COLON IDENT{$$=template("%s %s",$3,$1);}
				|function_procedure_param DEL_SEMICOLON IDENT DEL_COLON basic_data_types{$$=template("%s,%s %s",$1,$5,$3);}
				|function_procedure_param DEL_SEMICOLON IDENT DEL_COLON KW_ARRAY array_size_declaration KW_OF basic_data_types{$$=template("%s,%s %s%s",$1,$8,$3,$6);}
				|function_procedure_param DEL_SEMICOLON IDENT DEL_COLON KW_ARRAY KW_OF basic_data_types {$$=template("%s,%s* %s",$1,$7,$3);}
				|function_procedure_param DEL_SEMICOLON IDENT DEL_COLON IDENT{$$=template("%s,%s %s",$1,$5,$3);};
				

function_procedure_call : IDENT DEL_LEFTPAR function_procedure_call_params DEL_RIGHTPAR {$$=template("%s(%s)",$1,$3);};

function_procedure_call_params: 			{$$=template("");}
				|expressions		{$$ = $1; }
       				|function_procedure_call_params DEL_COMMA expressions	{ $$ = template("%s,%s", $1, $3);}; 
/*-----------------------------------------------------------------------------------------------------------------------------*/
basic_data_types : 	KW_INTEGER{ $$ = template("int");}
			|KW_BOOL{ $$ = template("int");}
			|KW_CHAR{ $$ = template("char");}
			|KW_REAL{ $$ = template("double");};

data_types: 	basic_data_types{$$=$1;}
		|KW_ARRAY KW_OF basic_data_types{$$=template("%s*",$3);}; 

array_size_declaration: DEL_SQRLEFT POSINT DEL_SQRRIGHT {$$=template("[%s]",$2);}
			|array_size_declaration DEL_SQRLEFT POSINT DEL_SQRRIGHT{$$=template("%s[%s]",$1,$3);};

typedef_declaration : 	KW_TYPE {$$ = template("");}
			|typedef_declaration IDENT CMP_EQUAL basic_data_types DEL_SEMICOLON{$$=template("%s\ntypedef %s %s;\n",$1,$4,$2);}          
			|typedef_declaration IDENT CMP_EQUAL KW_FUNCTION DEL_LEFTPAR function_procedure_param DEL_RIGHTPAR DEL_COLON basic_data_types DEL_SEMICOLON  {$$ = template("%s\ntypedef %s %s(%s);",$1,$9,$2,$6);}
			|typedef_declaration IDENT CMP_EQUAL KW_ARRAY array_size_declaration KW_OF basic_data_types DEL_SEMICOLON{$$=template("%s\ntypedef %s %s%s;",$1,$7,$2,$5);}
			|typedef_declaration IDENT CMP_EQUAL KW_ARRAY KW_OF basic_data_types DEL_SEMICOLON{$$=template("%s\ntypedef %s* %s;",$1,$6,$2);}; 

variable_declaration : 	KW_VAR {$$ = template("");}
			|variable_declaration single_plural_ident DEL_COLON basic_data_types DEL_SEMICOLON{$$=template("%s %s %s;\n",$1,$4,$2);}
			|variable_declaration single_plural_ident DEL_COLON IDENT DEL_SEMICOLON{$$=template("%s %s %s;\n",$1,$4,$2);}
			|variable_declaration single_plural_ident DEL_COLON KW_ARRAY array_size_declaration KW_OF basic_data_types DEL_SEMICOLON{$$=template("%s\n%s %s%s;",$1,$7,$2,$5);}
			|variable_declaration single_plural_ident DEL_COLON KW_ARRAY KW_OF basic_data_types DEL_SEMICOLON{$$=template("%s\n%s* %s;",$1,$6,$2);};
 
single_plural_ident : 	single_plural_ident DEL_COMMA IDENT {$$=template("%s,%s",$1,$3);}
			|IDENT{$$=template("%s",$1);};



/*---------------------------------CONSTANT FUNCTION------------------------------------*/
read_string: 	FUNC_RDSTR DEL_LEFTPAR DEL_RIGHTPAR {$$=template("readString()");};
read_integer: 	FUNC_RDINT DEL_LEFTPAR DEL_RIGHTPAR {$$=template("atoi(readString())");};
read_real: 	FUNC_RDREAL DEL_LEFTPAR DEL_RIGHTPAR {$$=template("atof(readString())");};
write_string: 	FUNC_WRSTR DEL_LEFTPAR IDENT DEL_RIGHTPAR {$$=template("writeString(%s)",$3);}
		|FUNC_WRSTR DEL_LEFTPAR STRING DEL_RIGHTPAR {$$=template("writeString(%s)",string_ptuc2c($3));}
		|FUNC_WRSTR DEL_LEFTPAR KW_RESULT DEL_RIGHTPAR {$$=template("writeString(result)");};
write_integer:	FUNC_WRINT DEL_LEFTPAR expressions DEL_RIGHTPAR{$$=template("writeInteger(%s)",$3);}
		|FUNC_WRINT DEL_LEFTPAR KW_RESULT DEL_RIGHTPAR {$$=template("writeInteger(result)");};
write_real: 	FUNC_WRREAL DEL_LEFTPAR expressions DEL_RIGHTPAR{$$=template("writeInteger(%s)",$3);}
		|FUNC_WRREAL DEL_LEFTPAR KW_RESULT DEL_RIGHTPAR {$$=template("writeReal(result)");};
/*---------------------------------------------------------------------------------------*/

/*-----------------------------------Expressions-------------------------------------*/
expressions : 			IDENT	 	{$$=template("%s",$1);}
				|POSINT 	{$$=template("%s",$1);}
				|REAL 		{$$=template("%s",$1);}
				|STRING	 	{$$ = string_ptuc2c($1);}
				|BOOL_TRUE 	{$$=template("1");}
				|BOOL_FALSE 	{$$=template("0");}
				|read_string 	{$$=template("%s",$1);}
				|read_integer	{$$=template("%s",$1);}
				|read_real 		{$$=template("%s",$1);}
				|array_expression 	{$$=template("%s",$1);}
				|function_procedure_call 	{$$=template("%s",$1);}
				|KW_NOT expressions %prec NOT 	{$$=template("not (%s)",$2);}
				|LOG_NOT expressions %prec NOT 	{$$=template("!(%s)",$2);}
				|OP_PLUS expressions %prec UPLUS_UMINUS		{$$=template("(%s)",$2);}
				|OP_MINUS expressions %prec UPLUS_UMINUS	{$$=template("-(%s)",$2);}
				|casting expressions %prec CAST 		{$$=template("%s%s",$1,$2);}
				|expressions OP_MULT expressions %prec FACTORS		{$$=template("%s * %s",$1,$3);}
				|expressions OP_DIV expressions %prec FACTORS		{$$=template("%s / %s",$1,$3);}
				|expressions KW_DIV expressions %prec FACTORS		{$$=template("%s / %s",$1,$3);}
				|expressions KW_MOD expressions %prec FACTORS		{$$=template("%s %s %s",$1,"%",$3);}
				|expressions OP_PLUS expressions %prec PLUS_MINUS	{$$=template("%s + %s",$1,$3);}
				|expressions OP_MINUS expressions %prec PLUS_MINUS	{$$=template("%s - %s",$1,$3);}
				|expressions CMP_EQUAL expressions %prec RELATIONAL	{$$=template("%s == %s ",$1,$3);}
				|expressions CMP_NOTEQUAL expressions %prec RELATIONAL	{$$=template("%s != %s",$1,$3);}
				|expressions CMP_LESS expressions %prec RELATIONAL	{$$=template("%s < %s",$1,$3);}
				|expressions CMP_LESSEQUAL expressions %prec RELATIONAL	{$$=template("%s <= %s",$1,$3);}
				|expressions CMP_GREATER expressions %prec RELATIONAL	{$$=template("%s > %s",$1,$3);}
				|expressions CMP_GREATEREQUAL expressions %prec RELATIONAL	{$$=template("%s >= %s",$1,$3);}
				|expressions KW_AND expressions %prec LOGICAL_AND	{$$=template("%s && %s",$1,$3);}
				|expressions LOG_AND expressions %prec LOGICAL_AND 	{$$=template("%s && %s",$1,$3);}
				|expressions KW_OR expressions %prec LOGICAL_OR		{$$=template("%s || %s",$1,$3);}
				|expressions LOG_OR expressions %prec LOGICAL_OR	{$$=template("%s || %s",$1,$3);}
				|DEL_LEFTPAR expressions DEL_RIGHTPAR %prec PAR		{$$=template("(%s)",$2);};
/*-------------------------------------------------------------------------------------------*/

/*------------------------------------COMMANDS-----------------------------------------------*/
complex_command_content:  	{$$=template("");} 
				|complex_command_content distinct_commands {$$=template("%s %s",$1,$2);};
				|complex_command_content DEL_SEMICOLON distinct_commands {$$=template("%s %s",$1,$3);};
complex_commands : KW_BEGIN complex_command_content KW_END{$$=template("\n%s\n",$2);};
function_complex_commands : KW_BEGIN complex_command_content DEL_SEMICOLON KW_RETURN KW_END{$$=template("\n%s\nreturn result;\n",$2);};
distinct_commands: assignment_command				{$$=template("%s;\n",$1);} 
		|result_command					{$$=template("%s;\n",$1);}
		|if_command 					{$$=template("%s\n",$1);}
		|for_command 					{$$=template("%s\n",$1);}
		|while_command 					{$$=template("%s\n",$1);}
		|repeat_command 				{$$=template("%s\n",$1);}
		|label_command 					{$$=template("%s;\n",$1);}
		|goto_command 					{$$=template("%s;\n",$1);}
		|return_command					{$$=template("%s;\n",$1);}
		|function_procedure_call 			{$$=template("%s;\n",$1);}
		|read_string 					{$$=template("%s;\n",$1);}
		|read_integer 					{$$=template("%s;\n",$1);}
		|read_real 					{$$=template("%s;\n",$1);}
		|write_string 					{$$=template("%s;\n",$1);}
		|write_integer 					{$$=template("%s;\n",$1);}
		|write_real 					{$$=template("%s;\n",$1);};

statement_commands_contents : 	distinct_commands	{$$=template("%s",$1);}
				|complex_commands	{$$=template("{%s}",$1);};

assignment_command : IDENT ASSIGNMENT expressions 		{$$=template("%s = %s",$1,$3);};
		     |IDENT array_sqr_content ASSIGNMENT expressions 		{$$=template("%s%s = %s",$1,$2,$4);}

result_command : KW_RESULT ASSIGNMENT expressions 		{$$=template("result = %s",$3);};

if_command : 	KW_IF expressions KW_THEN statement_commands_contents {$$=template("if(%s)\n \n%s\n",$2,$4);}
		|if_command KW_ELSE statement_commands_contents {$$=template("%s else %s",$1,$3);};
for_command:	KW_FOR IDENT ASSIGNMENT expressions KW_TO expressions KW_DO statement_commands_contents 		{$$=template("for(%s=%s;%s<%s;%s++)\n%s",$2,$4,$2,$6,$2,$8);}
		|KW_FOR IDENT ASSIGNMENT expressions KW_DOWNTO expressions KW_DO statement_commands_contents 		{$$=template("for(%s=%s;%s>%s;%s--)\n%s", $2, $4, $2, $6, $2, $8);};

while_command:	KW_WHILE expressions KW_DO statement_commands_contents 		{$$=template("while(%s)\n%s",$2,$4);};

repeat_command: KW_REPEAT statement_commands_contents KW_UNTIL expressions	{$$=template("do\n%s\nwhile(%s);\n",$2,$4);};

label_command: IDENT DEL_COLON statement_commands_contents 			{$$=template("%s:%s",$1,$3);};

goto_command : KW_GOTO IDENT  					{$$=template("goto %s",$2);};

return_command :KW_RETURN 							{$$=template("return result");};

/*-------------------------------------------------------------------------------------------*/


array_expression : 	IDENT array_sqr_content { $$ = template("%s%s",$1,$2);};

array_sqr_content : 	DEL_SQRLEFT expressions DEL_SQRRIGHT{$$=template("[%s]",$2);} 
			|array_sqr_content DEL_SQRLEFT expressions DEL_SQRRIGHT{$$=template("%s[%s]",$1,$3);};


casting : 	DEL_LEFTPAR data_types DEL_RIGHTPAR {$$=template("(%s)",$2);};
		//|DEL_LEFTPAR IDENT DEL_RIGHTPAR {$$=template("(%s)",$2);};
	  	
	
 



