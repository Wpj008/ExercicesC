#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char pas[10];  // mot de passe (max 9 caractères + '\0')
    char pwg[10];  // mot de passe généré
    char keys[] = {'1','2','3','4','5','6','7','8','9','0',
                   'a','b','c','d','e','f','g','h','i','j',
                   'k','l','m','n','o','p','q','r','s','t',
                   'u','v','w','x','y','z'};
    int tailleKeys = sizeof(keys) / sizeof(keys[0]);
    int i;

    printf("Saisir le mot de passe a 4 caractères : ");
    scanf("%s", pas);

    srand(time(NULL));  // initialisation du générateur aléatoire

    do {
        int len = strlen(pas);
        for ( i = 0; i < len; i++) {
            int r = rand() % tailleKeys;
            pwg[i] = keys[r];
        }
        pwg[strlen(pas)] = '\0'; // fin de chaîne

        printf("%s\n", pwg);
        printf("recherche... patientez\n");

        system("cls"); // sur Windows
        // system("clear"); // sur Linux / Mac

    } while (strcmp(pwg, pas) != 0);

    printf("Le mot de passe saisi est : %s\n", pwg);

    return 0;
}

