#include <stdio.h>
#include <stdlib.h>

// 25. Somme des n premiers entiers positifs

int main() {
    int a, i;
    int somme = 0;

    printf("Saisir un entier : ");
    scanf("%d", &a);

    for (i = a; i > 0; --i) {
        printf(" somme = %d +  %d\n", somme, i);
        somme = somme + i;
        printf("Total somme =  %d\n", somme);
    }

    printf("La somme des %d premiers entiers positifs vaut : %d\n", a, somme);

    return 0;
}

