#include <stdio.h>
#include <stdlib.h>

// 73. Trier un tableau en ordre croissant.(tri par selection)

int main() {
    int taille, i, j, c;

    printf("Saisir la taille du tableau : ");
    scanf("%d", &taille);

    int table[taille];

    
    for (i = 0; i < taille; i++) {
    	
        if (i == 0){
        	
            printf("Saisir le %d er element : ", i + 1);
    }
    
		else{
            printf("Saisir le %d eme element : ", i + 1);
            
    }

        scanf("%d", &table[i]);
    }

   
    for (i = 0; i < taille - 1; i++) {
        for (j = i + 1; j < taille; j++) {
            if (table[i] > table[j]) {
                c = table[i];
                table[i] = table[j];
                table[j] = c;
            }
        }
    }


    printf("Apres tri, les valeurs du tableau :");
    for (i = 0; i < taille; i++) {
        printf(" %d", table[i]);
    }
   

    return 0;
}

