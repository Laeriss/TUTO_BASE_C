#include <stdio.h>

#define NOMBRES_LIGNES 3
#define NOMBRES_COLONNES 2

int main(void)

{
    int damier[NOMBRES_LIGNES][NOMBRES_COLONNES] =

    {
        {1, 2},
        {3, 4},
        {5, 6}
        
    };
    
    int i, j;
    
    for (i = 0 ; i < NOMBRES_LIGNES ; i++)
        for(j = 0 ; j < NOMBRES_COLONNES ; j++)
            
            printf("Element indice [%d][%d] = %d\n", i, j, damier[i][j]);
    
    return 0;
}
