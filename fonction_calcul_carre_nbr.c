#include <stdio.h>
#include <stdlib.h>

//59.	Fonction pour calculer le carré d'un nombre.

int carre(int n) {
	
	 printf("Saisir un nombre : ");
    scanf("%d", &n);
    
    int result = n * n;
    
    printf("Le carre de %d est %d\n", n, result);
    
    return result;
}

int main() {
    int n, resultat;

   

 carre(n);

    
	
	
	return 0;
}
