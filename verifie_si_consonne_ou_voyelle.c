#include <stdio.h>
#include<stdlib.h>

//8.	V�rifier si un caract�re est une voyelle ou une consonne.



int main() {
    char c;

    printf("Entrez un caractere : ");
    scanf(" %c", &c);  // espace avant %c pour ignorer les espaces et retours chariot

    // V�rifier si c'est une lettre alphab�tique
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        // V�rifier si c'est une voyelle (minuscule ou majuscule)
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
            printf("C'est une voyelle.\n");
        } else {
            printf("C'est une consonne.\n");
        }
    } else {
        printf("Ce n'est pas une lettre.\n");
    }

    return 0;
}

