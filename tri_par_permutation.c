#include <stdio.h>
#include <stdlib.h>

// 73. Trier un tableau en ordre croissant.(tri par permutation)

int main() {
    int taille, i, j, c, k;

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

   
   //tri par permutation
   
    for (i = 1; i < taille; i++) {

       
        if (table[i] < table[i - 1]) {

            
            j = 0;
            
            while (table[j] < table[i]) {
                j++;
            }

          
            c = table[i];

           
            for (k = i - 1; k >= j; k--) {
                table[k + 1] = table[k];
            }

          
            table[j] = c;
        }
    }
    
    
    printf("Apres tri, les valeurs du tableau :");
    for (i = 0; i < taille; i++) {
        printf(" %d", table[i]);
    }
   

    return 0;
}

