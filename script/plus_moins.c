#include <stdio.h>
#include <stdlib.h>
#include<time.h>    
/*
void plus_moins(){
    int choix_joeuer;
    printf("Entrer votre choix de chiffre :");
    scanf("%d", &choix_joeuer);
}
*/
int main(){
    int choix_joueur;
    int difficulte;
    int choix = 0;
    int counter = 0;
    int valeur_a_trouver;

    srand(time(NULL));
    valeur_a_trouver = (rand() % 100) + 1;
    printf("%d\n", valeur_a_trouver); 
    
    printf("les differents niveaux sont : \n 1. facile (nombres d'essaie illimite) \n 2. moyen (nombre d'essaie 25) \n 3. difficile (nombre d'essaie 10) \n ");
    printf("\nVeuillez entrer votre choix de niveau: ");
    scanf("%d", &choix);

    switch (choix){
        case 1:
            do{
                printf("Entrer votre choix de chiffre :");
                scanf("%d", &choix_joueur);
                counter++;
            }while(choix_joueur != valeur_a_trouver); 
            printf("bingo\n");           
            break;
            
        case 2:
            do{
                printf("Entrer votre choix de chiffre :");
                scanf("%d", &choix_joueur);
                counter++;
            }while((choix_joueur != valeur_a_trouver) && (counter < 25)); 
            if(choix_joueur == valeur_a_trouver){
               printf("bingo\n");  
            }                      
            break;

        case 3:
            do{
                printf("Entrer votre choix de chiffre :");
                scanf("%d", &choix_joueur);
                counter++;
            }while((choix_joueur != valeur_a_trouver) && (counter < 10)); 
            if(choix_joueur == valeur_a_trouver){
               printf("bingo\n");  
            }          
            break;
    }    

    return 0;
}
