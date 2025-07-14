#include <stdio.h>
#include <stdlib.h>

int main() {
    int compteur = 0;
    int somme = 0;
    int a, result;
    char c;

    do {
        printf("Saisir une note : ");
        scanf("%d", &a);

        somme = somme + a;
        compteur++;

        printf("Voulez-vous continuer ? O/N : ");
        scanf(" %c", &c);  

    } while (c != 'N' && c != 'n');  

    result = somme / compteur;
    printf("La moyenne est de %d\n", result);

    return 0;
}

