#include <stdio.h>

void bonjour(void)

{
	

 	printf("BONJOUR MAN !\n");
}

int main (void)
{
		int retour_fonction;



	retour_fonction = bonjour();

	printf("Retour : %d\n", retour_fonction);

	return 0;
}

/*

Exemples de fonctions : 

	printf (paramètres) -> Afficher une donnée sur la sortie -> Formater
	scanf () -> Saisie formater -> pas sécurisé 

Fonction ne fait qu'une seule chose !

création fonction ? 

dès que ça se répète -> Faire une fonction ! 

Chaque variable n'existe ici que dans sa propre fonction par exemple balleX 
dans la sienne et init_ball pareil... -> On appelle ça variable locale... 
-> même si la variable à deux noms qui est le même -> Deux variables différentes car
appartient à la fonction //IMPORTANT//

par exemple si on met sur le return du bas balle X à la place de poseX -> 
on aura donc un retour sur la fonction balleX... 

Toute variable locale est détruite à la fin

Exemple :

int init_ball(int ballex); //prototype (pas obligé d'écrire posX)

int main (void)


{


	int balleX;


	balleX = init_ball(balleX) ;

	printf("Avant la partie : %d\n", balleX);

 // Une partie de jeu se fait 


	balleX = init_ball(balleX) ; 
	printf("Après la partie : %d\n", balleX);




	return 0; 
}



int init_ball(int ballex)

{

	ballex = 100;

	return ballex;
}
*/


