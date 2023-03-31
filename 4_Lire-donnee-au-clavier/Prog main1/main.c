#include <stdio.h>

int main (void)

{ 

/*
 
	maVariable : contenu de la variable (exemple = maVariable = 15)
	&maVariable : adresse où est stockée la variable 

	Passage de fixe à dynamique...

	Fonction scanf -> Pas très sécurisé, faire attention !

	*/ 

int AgeUtilisateur = 0 ;

printf("Vous avez quel âge ?\n");
scanf("%d", &AgeUtilisateur); 


printf("Vous avez %d ans. \n", AgeUtilisateur);


	return 0;
}