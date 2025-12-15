#include <stdio.h>
#include <stdlib.h>

//76.	Chercher un élément et afficher sa position.

int main(){
	
	
 int taille,j, i;

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
    
    printf("Saisir l element a rechercher : ");
    scanf("%d", &j);
    
    i = 0;
    
    while(i < taille && j != table[i]){
    	i++;
	
	}
	
	if(i < taille){
		
		printf("L element se trouve a la position = %d ", i+1);
		
	}else{
		
		printf("Element non trouve !");
	}
    
    
    
    
    return 0;
}
