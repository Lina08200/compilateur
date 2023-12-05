%{
char save[20];	
%}

%union 
{
     char* str;
     int entier;
     float reel;
}
%token <reel>real
%token <entier>integer
%token <str>mc_program <str>mc_end <str>mc_routine <str>mc_endr <str>mc_integer <str>mc_real <str>mc_logical <str>mc_character mc_read mc_write mc_if mc_then mc_else mc_endif mc_dowhile mc_enddo mc_call mc_equivalence mc_dimension or and gt ge eq ne le lt logical <str>idf character aff pvg vg add sstr prdt division pouv pfer guill point
%start S

%%
S: FONCTION mc_program idf LISTE_DEC LISTE_INST mc_end
	{printf("syntaxe correcte");YYACCEPT;}
 

LISTE_DEC : LISTE_DEC DEC | DEC
DEC : TYPE LISTE_VAR pvg 
TYPE: mc_integer {strcpy(save,$1);}| mc_real {strcpy(save,$1);} | mc_logical {strcpy(save,$1);} | mc_character {strcpy(save,$1);}
LISTE_VAR : VAR| VAR vg LISTE_VAR 
VAR : idf | DEC_DIMENSION | DEC_CHAR
DEC_DIMENSION : idf mc_dimension pouv TAILLE pfer 
DEC_CHAR : idf prdt integer
TAILLE : integer | integer vg integer 

LISTE_PARAMETRES : NOM_VAR | NOM_VAR vg LISTE_PARAMETRES
NOM_VAR : idf | ARRAY
ARRAY : idf pouv TAILLE pfer 

LISTE_INST : LISTE_INST INST | INST
INST : INST_AFF | INST_READ | INST_WRITE | INST_DO | INST_IF | INST_CALL | INST_EQUIVALENCE 
INST_AFF : idf aff EXPRESSION pvg 
EXPRESSION : logical | character | EXP_ARI 
EXP_ARI:  OPERANDE OPERATEUR_ARI OPERANDE PARTIE | EXP_ARI_PARENTHESES OPERATEUR_ARI EXP_ARI | OPERANDE 
PARTIE: OPERATEUR_ARI SUITE_PARTIE|
SUITE_PARTIE: EXP_ARI | EXP_ARI_PARENTHESES
EXP_ARI_PARENTHESES: pouv EXP_ARI pfer
OPERATEUR_ARI: add | sstr | division | prdt
OPERANDE: idf | integer | real | idf pouv TAILLE pfer

INST_READ : mc_read pouv idf pfer pvg 
INST_WRITE : mc_write pouv ELEMENTS_WRITE pfer pvg
ELEMENTS_WRITE : ELEMENT | ELEMENTS_WRITE vg ELEMENT
ELEMENT : character | idf

INST_IF: mc_if CONDITION_COMP mc_then LISTE_INST IF_ELSE mc_endif
IF_ELSE: mc_else LISTE_INST|
INST_DO: mc_dowhile CONDITION_COMP LISTE_INST mc_enddo
CONDITION: pouv OPERANDE point OPERATEUR  point OPERANDE pfer 
OPERATEUR : gt | ge | eq | ne | le | lt | and | or
CONDITION_COMP: CONDITION | pouv CONDITION_COMP point OPERATEUR point CONDITION pfer
INST_CALL : idf  mc_call idf pouv LISTE_PARAMETRES pfer pvg 

INST_EQUIVALENCE : mc_equivalence pouv LISTE_PARAMETRES pfer vg pouv LISTE_PARAMETRES pfer pvg
FONCTION: FONCTION TYPE mc_routine idf pouv LISTE_PARAMETRES pfer LISTE_DEC LISTE_INST INST_AFF mc_endr |
;
%%
int yyerror(char *msg)
{printf("%s error syntaxique");
return 1; }
main()
{
yyparse();
afficherEntites();
}yywrap()
{}