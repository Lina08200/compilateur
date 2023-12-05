#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//def de la liste des idf et constantes
typedef struct entite {
    char nomEntite[20];
    char nature[20];
    char type[20];
    char typeVar[20];
    float val;
    int taille;
} entite;

typedef struct TS {
    entite info;
    struct TS *suivant;
} TS;
//def de la liste des mots cle

typedef struct MS {
    char Motcle[20];
} MS;

typedef struct TSM {
    MS info;
    struct TSM *suivant;
} TSM;
//def de la liste des separateurs
typedef struct SEP {
    char Sep[20];
} SEP;

typedef struct TSS {
    SEP info;
    struct TSS *suivant;
} TSS;

//initialisations
TS *tete1 = NULL;
TSM *tete2 = NULL;
TSS *tete3 = NULL;

// Rechercher une entité, un mot clé ou un séparateur dans les listes
int Rechercher(char nom[],char typevar[], int i) {
    TS *p = tete1;
    TSM *q = tete2;
    TSS *k = tete3;

    switch (i) {
        case 0:
            while (p != NULL) {
                if (strcmp(nom, p->info.nomEntite) == 0){
                    if(strcmp(p->info.typeVar,typevar)==0)
                    return -1;
                    else return 1;
                }  // Retourne -1 si l'entité existe
                p = p->suivant;
            }
            break;
        case 1:
            while (q != NULL) {
                if (strcmp(nom, q->info.Motcle) == 0) return -1; // Retourne -1 si le mot clé existe
                q = q->suivant;
            }
            break;
        case 2:
            while (k != NULL) {
                if (strcmp(nom, k->info.Sep) == 0) return -1; // Retourne -1 si le séparateur existe
                k = k->suivant;
            }
            break;
    }
    return 1; // Retourne 1 si l'élément n'existe pas dans la liste
}

// Insérer une entité, un mot clé ou un séparateur dans les listes
void inserer(char entite[], char nature[], char type[], char typeVar[], float val, int i) {
    int y = Rechercher(entite, i);
    switch (i) {
        case 0:
            if (y > 0) {
                TS *nouveau = (TS *)malloc(sizeof(TS));
                strcpy(nouveau->info.nomEntite, entite);
                strcpy(nouveau->info.nature, nature);
                strcpy(nouveau->info.type, type);
                strcpy(nouveau->info.typeVar, typeVar);
                nouveau->info.val = val;
                nouveau->suivant = tete1;
                tete1 = nouveau;
            }
            break;
        case 1:
            if (y > 0) {
                TSM *nouveau = (TSM *)malloc(sizeof(TSM));
                strcpy(nouveau->info.Motcle, entite);
                nouveau->suivant = tete2;
                tete2 = nouveau;
            }
            break;
        case 2:
            if (y > 0) {
                TSS *nouveau = (TSS *)malloc(sizeof(TSS));
                strcpy(nouveau->info.Sep, entite);
                nouveau->suivant = tete3;
                tete3 = nouveau;
            }
            break;
    }
}
// Afficher les entités
void afficherEntites() {
    TS *temp = tete1;
    printf("\n*************************Table des IDF et cst************************* :\n");
    while (temp != NULL) {
        printf("\t |%10s |%10s |%10s |%10s |%10.2f |%10d |\n",
           temp->info.nomEntite, temp->info.nature, temp->info.type,
           temp->info.typeVar, temp->info.val, temp->info.taille);
        temp = temp->suivant;
    }
}

// Afficher les mots clés
void afficherMotsCles() {
    TSM *temp = tete2;
    printf("*************************Table des mots cle************************* :\n");
    while (temp != NULL) {
        printf("Mots cle :\n");
        printf(" %s\n", temp->info.Motcle);
        temp = temp->suivant;
    }
}

// Afficher les séparateurs
void afficherSeparateurs() {
    TSS *temp = tete3;
    printf("*************************Table des separateurs************************* :\n");
    while (temp != NULL) {
        printf("Separateurs :");
        printf(" %s\n", temp->info.Sep);
        temp = temp->suivant;
    }
}
 void insereType(char idf[],char type[]){
         TS *temp = tete1;
     while (temp != NULL && strcmp(temp->info.nomEntite,idf)!=0) {
        temp = temp->suivant;}
       if( strcmp(temp->info.nomEntite,idf)==0){
             if(strcmp(temp->info.type, "/") == 0){
             strcpy(temp->info.type,type);
             return;
         }}
         
 }
 int doubleDeclaration(char idf[]){
     TS *temp = tete1;
     while (temp != NULL && strcmp(temp->info.nomEntite,idf)!=0) {
        temp = temp->suivant;}
    if(temp !=NULL){
            if(strcmp(temp->info.type, "/") == 0){
             strcpy(temp->info.type,type);
             return 1; // retourne 1 si la variable n'a pas été declaré 
         }
    }
    return -1; // retourne 1 si la var a ete declare
 }
