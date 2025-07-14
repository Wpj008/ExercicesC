#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//40.	Compter le nombre de voyelles dans une cha�ne.

int main() {
    char texte[100];  // Tableau pour stocker la cha�ne
    int compteur = 0;
    int i;

    printf("Saisir une cha�ne de caract�res (max 99 caract�res) : ");
    fgets(texte, sizeof(texte), stdin);  // Lire la cha�ne

    // Parcourir chaque caract�re
    for (i = 0; i < strlen(texte); i++) {
        char c = texte[i];  // Stocker le caract�re actuel

        // V�rifier si c est une voyelle (majuscule ou minuscule)
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
            compteur++;
        }
    }

    printf("Le nombre de voyelles est : %d\n", compteur);
    return 0;
}

