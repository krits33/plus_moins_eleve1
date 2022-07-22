#include <stdio.h>
#include <stdlib.h>
#include<time.h> 

int main(){
    int choix_joeuer;
    int tries;
    int choix = 0;
    int counter = 0;
    int valeur_a_trouver;
    int score;

    srand(time(NULL));
    valeur_a_trouver = (rand() % 100) + 1;
    printf("%d\n", valeur_a_trouver);

    printf("JOUEUR 1 - entrer le nombre d'essaie pour JOUEUR 2 :");
    scanf("%d", &tries);

    do{
        printf("JOUEUR 2 - entrer votre choix de chiffre :");
        scanf("%d", &choix_joeuer);
        counter++;
    }while((choix_joeuer != valeur_a_trouver) && (counter < tries)); 
    score = tries - counter;
    printf("Le score de JOUEUR 1 est - %d \n", score); 

    return 0;          
            
}
