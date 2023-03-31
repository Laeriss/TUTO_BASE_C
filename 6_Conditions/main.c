#include <stdio.h>

int main (void)

{

	/* 

	 opérateur de comparaison :

	 == : égal à
	 != : différent de
	 <  : plus petit que
	 >  ; plus granq que
	 <= ; plus petit ou égal 
	 >= : plus grand ou égal 
	
	on peut juste mettre le nom de la variable quand c'est vrai ou faux 

	! = permet de tester l'inverse -> n'est pas à 1

	Test opérateur multiple -> Autres opérateurs

	&& : ET
	|| : (shift + option + l) -> OU
	!  : NOT

	int age = 101;

	if (age < 1)
	{
		printf("Tu n'es pas né\n");
	}

	else if ((age >= 1 && age <=100) || age == 101)

	{

		printf("Tu as un âge compris entre 1 et 100 ans man !\n");
	}

	else	
	{
		printf("Waaaah tu es plus vieux qu'un moine shaolin ! \n");
	}


break -> sortir du switch

int age = 375;

 switch	(age)

{

case 0 :   
		printf("Tu as 0 ans :)\n" );
		break;

case 10 : 
		printf("Tu as 10 ans ohhh\n");
		break;	

case 375 : 
		printf("Tu as 375 ans yeaaaah l'elfe\n");
		break; 


 {

 default :
 	printf("Tu n'as ni 0 ans ni 10 ans\n");
 	break;
 }

}

Ternaire ? 

	int age = 14;

(age == 15) ? printf("Tu as 15 ans normalement\n") : printf("tu n'as pas 15 ans\n");

	*/


	int age = 14;
		int il_a_quize_ans = -1;


il_a_quize_ans = (age == 15) ? 1 : 0;

printf("Tu as 15 ans normalement = %d\n", il_a_quize_ans);

	return 0;

}

















