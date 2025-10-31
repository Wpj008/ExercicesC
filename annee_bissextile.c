#include <stdio.h>
#include<stdlib.h>

//5.	Vérifier si une année est bissextile.

int main() {
    int annee;

   printf( "Entrez une annee : ");
   scanf("%d",&annee);

    if (annee % 4 == 0) {
        if (annee % 100 != 0) {
            printf("C'est une annee bissextile." );
        } else if (annee % 400 == 0) {
            printf( "C'est une année bissextile.");
        } else {
            printf("Ce n'est pas une annee bissextile.");
        }
    } else {
        printf("Ce n'est pas une annee bissextile." );
    }

    return 0;
}

