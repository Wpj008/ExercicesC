#include <stdio.h>
#include <stdlib.h>



//11.	Demander un chiffre (0–9) et afficher en toutes lettres (ex: « zéro », « un »).




int main(){

    int a;
    printf("Saisir un chiffre entre 0-9 : ");
    scanf("%d",&a);

    switch(a){

        case 0 :

                printf("ZERO");

                break;

        case 1 :

                printf("UN");

                break;

        case 2 :

                printf("DEUX");

                break;

        case 3 :

                printf("TROIS");

                break;

        case 4 :

                printf("QUATRE");

                break;

        case 5 :

                printf("CINQ");

                break;

            case 6 :

                printf("SIX");

                break;

            case 7 :

                printf("SEPT");

                break;

            case 8 :

                printf("HUIT");

                break;

            case 9 :

                printf("NEUF");

                break;

            default:
                printf("Le chiffre n'est pas dans l'intervalle" );



    }





return 0;
}
