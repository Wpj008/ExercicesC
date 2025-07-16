#include <stdio.h>
#include <stdlib.h>

//60.	Fonction qui prend deux entiers et échange leurs valeurs.

void echanger() {
    int a, b, temp;

    printf("Saisir le premier entier : ");
    scanf("%d", &a);

    printf("Saisir le deuxieme entier : ");
    scanf("%d", &b);

    printf("Avant l'echange : a=%d, b=%d\n", a, b);

    // échange simple
    temp = a;
    a = b;
    b = temp;

    printf("Apres l'echange : a=%d, b=%d\n", a, b);
}

int main() {
    echanger();
	
	return 0;
}
