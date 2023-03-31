#include <stdio.h>

int main (void)

{

/* 

<Variable> = <Variable> + X --> <Variable> += X (pareil plus ergonomique dans le language)

-> On peut utiliser cette astuce pour tout les opérateurs -> c'est pareil

parenthèse prioritaire quoi qu'il arrive... même si les * et / et % sont prioritaires normalement...

pré/post incrémentation -> On évite car rien est sur -> ++v et --v;  ou v-- ou v++; 
*/

int niveau_joueur = 0;

printf("Choisir le niveau du joueur\n");
scanf("%d", &niveau_joueur);


printf("Niveau de départ: %d\n", niveau_joueur);

/* MONTÉE DE NIVEAU */

niveau_joueur ++; 
printf("Niveau actuel : %d\n", niveau_joueur);



	return 0;
}