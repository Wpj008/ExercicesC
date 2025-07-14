#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//40.	Compter le nombre de voyelles dans une chaîne.

int main() {
    char texte[100];  // Tableau pour stocker la chaîne
    int compteur = 0;
    int i;

    printf("Saisir une chaîne de caractères (max 99 caractères) : ");
    fgets(texte, sizeof(texte), stdin);  // Lire la chaîne

    // Parcourir chaque caractère
    for (i = 0; i < strlen(texte); i++) {
        char c = texte[i];  // Stocker le caractère actuel

        // Vérifier si c est une voyelle (majuscule ou minuscule)
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
            compteur++;
        }
    }

    printf("Le nombre de voyelles est : %d\n", compteur);
    return 0;
}

