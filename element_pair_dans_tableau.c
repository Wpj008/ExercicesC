#include <stdio.h>
#include <stdlib.h>

//74.	Compter combien d'éléments sont pairs.

int main(){
	
	
 int taille, i;
 int c = 0;

    printf("Saisir la taille du tableau : ");
    scanf("%d", &taille);

    int table[taille];

    
    for (i = 0; i < taille; i++) {
        if (i == 0)
            printf("Saisir le %d er element : ", i + 1);
        else
            printf("Saisir le %d eme element : ", i + 1);

        scanf("%d", &table[i]);
    }
    
    for(i = 0 ; i < taille ; i++){
    	
    	if(table[i] % 2 == 0){
    		
    		c = c + 1;
		}
	}

	
	printf("Il y a %d element(s) pair(s) dans le tableau !", c);
	
	return 0;
}
