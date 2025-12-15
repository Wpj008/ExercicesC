#include <stdio.h>
#include <stdlib.h>

//79.	Copier un tableau dans un autre.

int main(){
	
	
 int taille,j, i,c;
 

    printf("Saisir la taille du tableau : ");
    scanf("%d", &taille);

    int table[taille];
    int table2[taille];
  
  
  
    for (i = 0; i < taille; i++) {
    	
        if (i == 0){
            printf("Saisir le %d er element : ", i + 1);
      }
      
        else{
            printf("Saisir le %d eme element : ", i + 1);

		}
		
        scanf("%d", &table[i]);
		
	}

	for (i = 0 ; i < taille ; i++){
		
		
		table2[i] =table[i] ;
		
		
		
	}
	

 
  printf("Les elements copies : ");
    for (i = 0; i < taille; i++) {
        printf(" %d ", table2[i]);
    }
    

return 0;

}
