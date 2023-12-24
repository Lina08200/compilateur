%{
#include"syntUpdate2.tab.h" 
extern nb_ligne;
extern nb_car;

int i;
#include "TS.h"
extern YYSTYPE yylval;
%}
lettreM [A-Z]
lettre [a-z]
chiffre[0-9]
IDF ({lettre}|{lettreM})({lettre}|{lettreM}|{chiffre})*
Logical (TRUE|FALSE)
Integer (0|-?{chiffre}+)
Real {Integer}\.{chiffre}+
Character \"[^\"\n]*\"
commentaire %[^;]*;
%%
PROGRAM 		{ yylval.str=strdup(yytext); inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_program;}
END 			{ yylval.str=strdup(yytext); inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_end;}
ROUTINE 		{ yylval.str=strdup(yytext); inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_routine;}
ENDR 			{ yylval.str=strdup(yytext); inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_endr;}
INTEGER 		{ yylval.str=strdup(yytext); inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_integer;}
REAL 			{ yylval.str=strdup(yytext); inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_real;}
LOGICAL 		{ yylval.str=strdup(yytext); inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_logical;}
CHARACTER 		{ yylval.str=strdup(yytext); inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_character;}
READ 			{inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_read;}
WRITE 			{inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_write;}
IF 				{inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_if;}
THEN 			{inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_then;}
ELSE 			{inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_else;}
ENDIF 			{inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_endif;}
DOWHILE 		{inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_dowhile;}
ENDDO 			{inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_enddo;}
CALL 			{inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_call;}
EQUIVALENCE		{inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_equivalence;}
DIMENSION 		{inserer(yytext,"/","/","/",0, 1); nb_car = nb_car + strlen(yytext); return mc_dimension;}
OR				{inserer(yytext,"/","/","/",0, 2); nb_car = nb_car + strlen(yytext); return or;}
AND				{inserer(yytext,"/","/","/",0, 2); nb_car = nb_car + strlen(yytext); return and;}
GT 				{inserer(yytext,"/","/","/",0, 2); nb_car = nb_car + strlen(yytext); return gt;}
GE 				{inserer(yytext,"/","/","/",0, 2); nb_car = nb_car + strlen(yytext); return ge;} 
EQ 				{inserer(yytext,"/","/","/",0, 2); nb_car = nb_car + strlen(yytext); return eq;}
NE 				{inserer(yytext,"/","/","/",0, 2); nb_car = nb_car + strlen(yytext); return ne;}
LE 				{inserer(yytext,"/","/","/",0, 2); nb_car = nb_car + strlen(yytext); return le;}
LT 				{inserer(yytext,"/","/","/",0, 2); nb_car = nb_car + strlen(yytext); return lt;}
{Logical} 		{inserer(yytext,"cst","LOGICAL","/",0, 0);nb_car = nb_car + strlen(yytext); return logical;}
{Real} 			{nb_car = nb_car + strlen(yytext);  yylval.reel=atof(yytext); inserer(yytext,"cst","REAL","/",0, 0); return real;}
{IDF} 			{nb_car = nb_car + strlen(yytext);
					if(strlen(yytext)>10) printf("ligne %d, character  %d : erreur lexicale %s: IDF trop long\n", nb_ligne, nb_car, yytext);
					else { yylval.str=strdup(yytext); return idf;}}
{commentaire} 	{ int len=strlen(yytext);
					for(i=0;i<len;i++){
					if(yytext[i]=='\n'){nb_ligne++; nb_car=1;}
					else nb_car++;}}
{Integer} 		{nb_car = nb_car + strlen(yytext);
					int entier = atoi(yytext);
					if (entier >= -32768 && entier<= 32767){ yylval.integer=entier; inserer(yytext,"cst","INTEGER","/",0, 0); return integer;}
					else printf("erreur lexicale %s a la ligne  %d \n",yytext,nb_ligne); }
{Character}		{nb_car = nb_car + strlen(yytext); yylval.str=strdup(yytext); return character;}
"."				{nb_car = nb_car + strlen(yytext); inserer(yytext,"/","/","/",0, 2); return point;}
"=" 			{nb_car = nb_car + strlen(yytext); inserer(yytext,"/","/","/",0, 2); return aff;}
";" 			{nb_car = nb_car + strlen(yytext); inserer(yytext,"/","/","/",0, 2); return pvg;}
"," 			{nb_car = nb_car + strlen(yytext); inserer(yytext,"/","/","/",0, 2); return vg;}
"+" 			{nb_car = nb_car + strlen(yytext); inserer(yytext,"/","/","/",0, 2); return add;}
"-" 			{nb_car = nb_car + strlen(yytext); inserer(yytext,"/","/","/",0, 2); return sstr;}
"*" 			{nb_car = nb_car + strlen(yytext); inserer(yytext,"/","/","/",0, 2); return prdt ;}
"/" 			{nb_car = nb_car + strlen(yytext); inserer(yytext,"/","/","/",0, 2); return division;}
"(" 			{nb_car = nb_car + strlen(yytext); inserer(yytext,"/","/","/",0, 2); return pouv;}
")" 			{nb_car = nb_car + strlen(yytext); inserer(yytext,"/","/","/",0, 2); return pfer;}
"\"" 			{nb_car = nb_car + strlen(yytext); inserer(yytext,"/","/","/",0, 2); return guill;}
[ \t]			{nb_car = nb_car + strlen(yytext);}
\n 				{nb_car = 1; nb_ligne++; }
. 				{printf("line %d, character  %d : erreur lexicale %s\n", nb_ligne, nb_car, yytext);} 


