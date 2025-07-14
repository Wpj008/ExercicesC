#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
	int somme = 0;

    printf("Saisir un nombre : ");
    scanf("%d", &a);

    while(a != 0) {
        somme = somme + (a % 10); // ajout le dernier chiffre
        a = a / 10;               // suppression du dernier chiffre
    }

    printf("La somme des chiffres est : %d", somme);

    return 0;
}

