#include <stdio.h>
#include <stdlib.h>

//38.	Vérifier si un nombre est palindrome.


int main(){
	
	
	
	int a;
	
	 printf("Saisir un nombre : ");
    scanf("%d", &a);


    int nombre = a; // Sauvegarde du nombre saisi par l'user
    int inverse = 0;// Initialisation de la variable inverse
    int b;

    while (a > 0) {// Boucle pour inverser le nombre
        b = a % 10;// Extraction du dernier chiffre
        inverse = inverse * 10 + b;// Ajout du chiffre à la variable inverse
        a = a / 10;
    }

    if (nombre == inverse) // Vérification si le nombre est identique à son inverse
        printf("%d est un palindrome !",nombre);
    else
        printf("%d n'est pas un palindrome.",nombre);

    return 0;    
}

	

