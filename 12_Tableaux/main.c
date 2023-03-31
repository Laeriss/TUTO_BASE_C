
#include <stdio.h>

#define TAILLE_TAB 5

int *creer_tableau(void);

void afficher_tableau(int *tab, int taille);

/*--------------------------------------------------------------*/

int main(void)


{
    
    //int tableau[TAILLE_TAB] = {16, 84, -2, 188, 3}; // nombre de case
    
    int i;
    
    int *tableau = creer_tableau();
    
    afficher_tableau(tableau, TAILLE_TAB);
    
    printf("\n \n");
    
    tableau[2] = -5;
    
    afficher_tableau(tableau, TAILLE_TAB);
    
    return 0;
}

/*--------------------------------------------------------------*/

int *creer_tableau(void)

{
    static int tableau_entiers[5];
    int i;

    
    for(i = 0 ; i < 5 ; i++ )
        tableau_entiers[i] = i * 3;
    
    return tableau_entiers;
}

/*--------------------------------------------------------------*/

void afficher_tableau(int *tab, int taille)

{
    int i;
    
    for(i = 0 ; i < taille ; i++)
        printf("[%d]", tab[i]);
}

/*
 
 [Déclartion tableau]
 
    <type> <nom_tableau>[X]; // déclare avec valeurs aléatoire
 
 [Initialisation]
    tableau[5] = {valeur1, valeur2, ...};
    tableau[5] = {0}; //Toutes les cases valent 0 (que pour 0)
 
 [Accès au tableau]
    tableau[X] : élément d'indice X (X+1 élément du tableau)
    tableau    : adresse du tableau
    *tableau   : premier élément du tableau
    *(tableau + X) : élément d'indice X
 
 (NOTE)
    tableau[5] même chose que -> *(tableau + 5)
    Le tableau est un pointeur sur son premier élément !
 
 */

