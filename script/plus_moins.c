#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void plus_moins( int choix_joueur,int valeur_a_trouver){

    printf("Veuillez entrer votre choix:  ");
    scanf("%d",&choix_joueur);
    

    if(choix_joueur == valeur_a_trouver){
        printf("bingo!\n");
    }

    else{
        plus_moins(choix_joueur,valeur_a_trouver);
    }
}
int main(){
    int choix_joueur;

    srand(time(NULL));

    int valeur_a_trouver = (rand() % 100) + 1;

     printf("%d\n",valeur_a_trouver);

    plus_moins(choix_joueur,valeur_a_trouver);

    return 0;
}


