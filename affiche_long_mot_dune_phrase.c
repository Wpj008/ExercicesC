#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//67.	Trouver et afficher le plus long mot d'une phrase.


int main() {
    char phrase[200];
    char mot[50], plusLong[50] = "";
    int i = 0, j = 0;

    printf("Saisir une phrase : ");
    gets(phrase);

    while (phrase[i] != '\0') {
        if (phrase[i] != ' ' && phrase[i] != '\t' && phrase[i] != '\n') {
            mot[j++] = phrase[i];
        } else {
            mot[j] = '\0';
            if (strlen(mot) > strlen(plusLong)) {
                strcpy(plusLong, mot);
            }
            j = 0;
        }
        i++;
    }

    // Vérifier le dernier mot (s'il n'y a pas d'espace à la fin)
    mot[j] = '\0';
    if (strlen(mot) > strlen(plusLong)) {
        strcpy(plusLong, mot);
    }

    printf("Le plus long mot est : %s\n", plusLong);

    return 0;
}

