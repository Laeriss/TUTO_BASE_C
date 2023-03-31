#include <stdio.h> // permet d'inclure des fichiers

int main(void)

{
    
    printf("Nom du fichier : %d \n", __LINE__);
    
    return 0;
}



/*
 
 pré-processeur : un sous programme qui va s'exécuter de manière prioriètre suivant des directives genre le #
 
 <> -> Chevron -> Permet d'inclure un fichier d'entête -> Fameuse bibliothèque
 
 stdio -> Standard Input Output -> Permet d'aller chercher dans le header..
 
    Constantes prédéfinies du language c :
        
        __FILE__ (nom du fichier)
        --LINE__ (ligne du fichier)
        __DATE__ (date de compilation)
        __TIME__ (heure de compilation)
 
 prog :
 
 #define TVA 20// définir quelque chose -> Une constante... (prédéfinie

 #define Pourcentage 100

 int main(void)
 
 int prixHT = 15;
 int prixTTC = 0;
 
 prixTTC = prixHT + (prixHT * TVA/Pourcentage);
 
 printf("afficher = %d \n", prixTTC);
 
 
 */




















