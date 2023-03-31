#include <stdio.h>

void inverser_nombres(int *pt_nb1, int *pt_nb2)

{
    int temporaire = 0;
    
    //printf("Fonction Avant : A = %d et B = %d \n", nombreA, nombreB);
    
    temporaire = *pt_nb2;
    *pt_nb2 = *pt_nb1;
    *pt_nb1 = temporaire;
    
    //printf("Fonction Apres : A = %d et B = %d \n", nombreA, nombreB);
    
}


int main(void)

{
    
    int nombreA = 15;
    int nombreB = 28;
    
    int *pointeurSurNombreA = &nombreA;
    int *pointeurSurNombreB = &nombreB;
    
    
    printf("Avant : A = %d et B = %d \n", nombreA, nombreB);
    
    inverser_nombres(pointeurSurNombreA, pointeurSurNombreB);

    printf("Apres : A = %d et B = %d \n", nombreA, nombreB);
    
    return 0;
}

/*
 
 Pointeurs ? Permet à une fonction de modifié des données
 
 -> C'est une variable qui va pointer une valeur... contient l'adresse d'une autre variable
 
 -> Variable contenant l'adresse d'une autre variable
 
 VARIABLES :
 
 maVariable : valeur de la variable
 &maVariable : adresse de variable
 
 Symbole pointeur -> *
 
 POINTEURS :
 
 monPointeur : adresse de la variable pointée
 *monpointeur : valeur de la variable pointée
 &monPointeur : adresse de mon pointeur
 
 *monPointeur = NULL ou *monPointeur = &maVariable (déclaration et initialisation d'un pointeur)
 
 
 %d -> Affiche une adresse de la variable ou pointeur
 */



















