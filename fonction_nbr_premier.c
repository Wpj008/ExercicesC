#include <stdio.h>
#include <stdlib.h>

//58.	Fonction qui affiche si un nombre est premier ou non.



void estPremier(int n) {
    int i;
    int premier = 1;  // suppose que c'est premier

    if (n <= 1) {
        premier = 0;
    } else {
        for (i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                premier = 0;
                break;
            }
        }
    }

    if (premier)
        printf("%d est un nombre premier.\n", n);
    else
        printf("%d n'est pas un nombre premier.\n", n);
}

int main() {
    int nombre;

    printf("Saisir un nombre : ");
    scanf("%d", &nombre);

    estPremier(nombre);

    return 0;
}

