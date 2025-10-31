#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//65.	Vérifier si une chaîne est un palindrome.


int main() {
    char chaine[100];
    int i, longueur, est_palindrome = 1;  // on part du principe que c'est un palindrome

    printf("Saisir une chaine : ");
    scanf("%s", chaine);  // attention : scanf ne lit pas les espaces

    longueur = strlen(chaine);

    for(i = 0; i < longueur / 2; i++) {
        if(chaine[i] != chaine[longueur - i - 1]) {
            est_palindrome = 0;  // ce n'est pas un palindrome
            break;
        }
    }

    if(est_palindrome) {
        printf("La chaine est un palindrome.\n");
    } else {
        printf("La chaine n'est pas un palindrome.\n");
    }

    return 0;
}

