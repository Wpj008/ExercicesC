#include <stdio.h>
#include <stdlib.h>

//75.	Afficher le tableau en ordre inverse.

int main(){
	
	
 int taille, i,j;
 int c = 0;

    printf("Saisir la taille du tableau : ");
    scanf("%d", &taille);

    int table[taille];
    int tableau[taille];

    
    for (i = 0; i < taille; i++) {
        if (i == 0)
            printf("Saisir le %d er element : ", i + 1);
        else
            printf("Saisir le %d eme element : ", i + 1);

        scanf("%d", &table[i]);
    }
    
    for(i = taille-1, j = 0 ; i >= 0 ; i--, j++){
    	tableau[j] = table[i];
	}
	
	for(i = 0 ; i< taille ; i++){
		
		table[i] = tableau[i];
	}
	
	printf("Le tableau inverse est : ");
	
	for(i = 0 ; i < taille ; i++){
		
		printf(" %d ", table[i]);
	}
    
return 0;
}
    
