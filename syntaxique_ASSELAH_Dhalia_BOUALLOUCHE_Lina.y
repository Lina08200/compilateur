%{
#include <stdio.h>
int yylex(void);
int nb_ligne = 1;
int nb_car = 1;
char save[20];	
char saveType[20];
char type[20];
char saveOpr[20];
int existe;
int k,i;
int saveVal = -1; 
%}

%union{
    float reel;
	int integer;
	char* str;
}
%token <reel>real
%token <integer>integer
%token <str>mc_program <str>mc_end <str>mc_routine <str>mc_endr <str>mc_integer <str>mc_real <str>mc_logical <str>mc_character mc_read mc_write mc_if mc_then mc_else mc_endif mc_dowhile mc_enddo mc_call mc_equivalence mc_dimension or and gt ge eq ne le lt logical <str>idf character aff pvg vg add sstr prdt division pouv pfer guill point
%start S

%%
S: FONCTION Q{printf("syntaxe correcte\n"); YYACCEPT;}

Q : mc_program idf {strcpy(saveType, $2);}LISTE_DEC LISTE_INST mc_end 
	
 

LISTE_DEC : LISTE_DEC DEC | DEC
DEC : TYPE LISTE_VAR pvg 
TYPE: mc_integer {strcpy(save,$1);} 
		| mc_real {strcpy(save,$1);}
		| mc_logical {strcpy(save,$1);} 
		| mc_character {strcpy(save,$1);}
		
LISTE_VAR : VAR| VAR vg LISTE_VAR 

VAR : idf { existe=doubleDeclaration($1,saveType); if(existe==0){ inserer($1,"idf","/",saveType,0, 0); insereType($1,save); insereTypeVar($1,saveType); }
														else printf("erreur sementique a la ligne %d: DOUBLE DECLARATION de la variable %s\n", nb_ligne, $1);}
          | DEC_DIMENSION | DEC_CHAR
		  
DEC_DIMENSION : idf mc_dimension pouv TAILLE pfer { existe=doubleDeclaration($1,saveType); if(existe==0){inserer($1,"idf","/",saveType,0, 0); insereType($1,save); insereTypeVar($1,saveType); }
																								else printf("erreur sementique ligne %d: DOUBLE DECLARATION de la variable %s\n", nb_ligne, $1);}
DEC_CHAR : idf prdt integer {existe=doubleDeclaration($1,saveType); if(existe==0){ inserer($1,"idf","/",saveType,0, 0); insereType($1,save); insereTypeVar($1,saveType); }
				                                                     else printf("erreur sementique a la ligne %d: DOUBLE DECLARATION de la variable %s\n", nb_ligne, $1);}
TAILLE : integer | integer vg integer 

LISTE_PARAMETRES : NOM_VAR | NOM_VAR vg LISTE_PARAMETRES
NOM_VAR : idf | ARRAY
			
ARRAY : idf pouv TAILLE pfer {existe=Rechercher($1,0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, $1);
							}

LISTE_INST : LISTE_INST INST | INST
INST : INST_AFF | INST_READ | INST_WRITE | INST_DO | INST_IF | INST_CALL | INST_EQUIVALENCE 
INST_AFF : idf aff logical pvg {existe=Rechercher($1,0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, $1);
									
									if(compareType($1, "LOGICAL") == 0) 
										printf("erreur sementique ligne %d: INCOMPATIBILTE DE TYPE de la variable %s\n", nb_ligne, $1);
									}
			|idf aff character pvg {existe=Rechercher($1,0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, $1);
										
									if(compareType($1, "CHARACTER") == 0) 
										printf("erreur sementique ligne %d: INCOMPATIBILTE DE TYPE de la variable %s\n", nb_ligne, $1);	
									}
			
			
			|idf aff EXP_ARI pvg {existe=Rechercher($1,0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, $1);
									k=recupererType($1);
									if(k==2){ strcpy(type,"INTEGER");}
									else if(k==3) {strcpy(type,"REAL"); }
									else{printf("erreur sementique : INCOMPATIBILTE DE TYPE de %s ligne %d \n", $1, nb_ligne);
									}}
			

EXP_ARI:  OPERANDE OPERATEUR_ARI OPERANDE PARTIE 
		| EXP_ARI_PARENTHESES OPERATEUR_ARI EXP_ARI 
		| OPERANDE 
PARTIE: OPERATEUR_ARI SUITE_PARTIE|
SUITE_PARTIE: EXP_ARI 
				| EXP_ARI_PARENTHESES
EXP_ARI_PARENTHESES: pouv EXP_ARI pfer
OPERATEUR_ARI: add {strcpy(saveOpr, "+");}
				| sstr {strcpy(saveOpr, "-");}
				| division {strcpy(saveOpr, "/");}
				| prdt {strcpy(saveOpr, "*");}
OPERANDE: idf {existe=Rechercher($1,0); 
				if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, $1);
				else{
						i=compareType($1,type);
						if(i==0) printf("erreur sementique : INCOMPATIBILTE DE TYPE de %s ligne %d \n", $1, nb_ligne);
				}
									}
		|integer {	saveVal = $1;
					if (strcmp(saveOpr, "/") == 0 && saveVal == 0)
						printf("erreur semantique : DIVISION PAR ZERO ligne %d\n", nb_ligne);
						saveVal = -1;}
		| real {saveVal = $1;
					if (strcmp(saveOpr, "/") == 0 && saveVal == 0)
						printf("erreur semantique : DIVISION PAR ZERO ligne %d\n", nb_ligne);
						saveVal = -1;}
		| idf pouv TAILLE pfer{existe=Rechercher($1,0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, $1);
									else{
										i=compareType($1,type);
										if(i==0) printf("erreur sementique : INCOMPATIBILTE DE TYPE de %s ligne %d \n", $1, nb_ligne);
									}
								}

INST_READ : mc_read pouv idf pfer pvg {existe=Rechercher($1,0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, $1);
									}
			
INST_WRITE : mc_write pouv ELEMENTS_WRITE pfer pvg
ELEMENTS_WRITE : ELEMENT | ELEMENTS_WRITE vg ELEMENT
ELEMENT : character | idf {existe=Rechercher($1,0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, $1);
									}
	

INST_IF: mc_if CONDITION_COMP mc_then LISTE_INST IF_ELSE mc_endif
IF_ELSE: mc_else LISTE_INST|
INST_DO: mc_dowhile CONDITION_COMP LISTE_INST mc_enddo
CONDITION: pouv OPERANDE point OPERATEUR  point OPERANDE pfer 
OPERATEUR : gt | ge | eq | ne | le | lt | and | or
CONDITION_COMP: CONDITION | pouv CONDITION_COMP point OPERATEUR point CONDITION pfer
INST_CALL : idf  mc_call idf pouv LISTE_PARAMETRES pfer pvg 
			

INST_EQUIVALENCE : mc_equivalence pouv LISTE_PARAMETRES pfer vg pouv LISTE_PARAMETRES pfer pvg
FONCTION: FONCTION TYPE mc_routine idf{ strcpy(saveType, $4); inserer($4,"idf","/",saveType,0, 0); insereType($4,save); insereTypeVar($4,saveType); } pouv LISTE_PARAMETRES pfer LISTE_DEC LISTE_INST INST_AFF mc_endr |
;
%%
int yyerror(char *msg)
{printf("%s error syntaxique a la ligne : %d \n", nb_ligne);
return 1; }
main()
{
yyparse();
afficherMotsCles();
afficherSeparateurs();
afficherEntites();
}yywrap()
{}

