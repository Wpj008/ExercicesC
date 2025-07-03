#include <stdio.h>
#include <stdlib.h>

// 27.	Afficher tous les entiers entre deux bornes données.


int main(){
    int a, b, i;

    printf("Saisir la valeur de la premiere borne : ");
    scanf("%d", &a);
    printf("\n");

    printf("Saisir la valeur de la deuxieme borne : ");
    scanf("%d", &b);
    printf("\n");

    

    if(a < b){
    	printf("Les valeurs comprises entre %d et %d sont : \n", a, b);
        for(i = a + 1; i < b; i++){
            printf("%d\n", i);
        }
    } else if(a > b){
    	printf("Les valeurs comprises entre %d et %d sont : \n", b, a);
        for(i = b + 1; i < a; i++){
            printf("%d\n", i);
        }
    } else {
        printf("Les bornes sont egales, il n'y a aucun entier entre elles.\n");
    }

    return 0;
}

