#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//66.	Compter le nombre de voyelles et de consonnes.


int main(){
	
	
    char phrase[100];
    int i, voyelles = 0, consonnes = 0;

    printf("Saisir une phrase : ");
    gets(phrase);  // simple pour lire une ligne

    for(i = 0; phrase[i] != '\0'; i++) {
        char c = phrase[i];

        // Vérifier si c'est une lettre majuscule
        if(c >= 'A' && c <= 'Z') {
            c = c + 32;  // transformer en minuscule
        }

        // Si c'est une voyelle
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            voyelles++;
        }
        // Si c'est une lettre (alphabétique) et pas une voyelle, c'est une consonne
        else if(c >= 'a' && c <= 'z') {
            consonnes++;
        }
    }

    printf("Nombre de voyelles : %d\n", voyelles);
    printf("Nombre de consonnes : %d\n", consonnes);

    return 0;
}

