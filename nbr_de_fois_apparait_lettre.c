#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//68.	Compter combien de fois une lettre donnée apparaît.


int main(){
	
	
    char str[100];
    char lettre;
    int i, compteur = 0;

    printf("Saisir une phrase : ");
    gets(str);

    printf("Saisir la lettre a chercher : ");
    scanf(" %c", &lettre); // espace avant %c pour ignorer \n

    lettre = tolower(lettre);

    for (i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == lettre) {
            compteur++;
        }
    }

    printf("La lettre %c apparaat %d fois.\n", lettre, compteur);

    return 0;

}
