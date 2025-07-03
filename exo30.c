#include <stdio.h>
#include <stdlib.h>

//30.	Afficher un carré d'étoiles de taille n.



int main(){

    int n, i, j;

    printf("Saisir la taille du carre : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {           
        for (j = 0; j < n; j++) {       
            printf("*");
        }
        printf("\n"); 
    }

  	
	return 0;
}
