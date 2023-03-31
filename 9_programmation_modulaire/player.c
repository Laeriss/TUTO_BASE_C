 #include <stdio.h>

#include "player.h"


//static int TVA = 20;

  void bonjour (void)

  {

printf("Bonjour : ! \n");


//printf("TVA = %d \n", TVA);

}

    int augmente_niveau(void)

{
    static int niveau =0;

    niveau+= 2;

    return niveau;
}




