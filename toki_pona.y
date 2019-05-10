

%{
#include <stdio.h>
#include <stdlib.h>
%}

%token MI ANTE SINA E

%%
toki_pona :
    sentance
    {;}
sentance :
    subject action_revobj
    {printf("\n");}
subject :
    MI 
    {printf("{%s}", $1);}
    | SINA
    {printf("S");}
verb :
    ANTE
    {;}
verb_group :
    verb
    {printf("V");}
action_revobj :
    verb_group revobj
    {;}
revobj :
    E noun_phase
    {printf("O");}
noun_phase :
    noun
    {;}
noun :
    SINA
    {;}
    | MI 
    {;}
%%

yyerror(const char *s){
    fprintf(stderr, "error: %s\n", s);
}

int main(){
    yyparse();
    return 0;
}
