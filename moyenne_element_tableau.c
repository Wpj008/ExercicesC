#include <stdio.h>
#include <stdlib.h>

//77.	Calculer la moyenne des valeurs du tableau.

int main(){
	
	
 int taille,j, i;
 
 int somme = 0;
 
 double moyenne = 0;

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
    
    for(i = 0 ; i < taille ; i++){
    	
    	j = table[i];
    	
    	
    	somme = somme + j;
    	
	}
	

	
	moyenne = somme / taille;
	
	printf("La moyenne vaut %lf", moyenne);
	
	
	return 0;
}
