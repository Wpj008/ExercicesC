#include <stdio.h>
#include <stdlib.h>

//78.	Fusionner deux tableaux en un seul.(avec le tri a bulle)

int main(){
	
	
 int taille,j, i,c;
 
 int somme = 0;
 
 double moyenne = 0;

    printf("Saisir la taille du tableau : ");
    scanf("%d", &taille);

    int table[taille];
    int table2[taille];
    int tableau[taille*2];
  

    printf("Saisir les elements du premier tableau \n"); 
    
    for (i = 0; i < taille; i++) {
        if (i == 0){
        	
            printf("Saisir le %d er element : ", i + 1);  
        
		}
		
        else{
            printf("Saisir le %d eme element : ", i + 1);
            
       }

        scanf("%d", &table[i]);
    
}
    
    printf("Saisir les elements du deuxieme tableau \n ");
    
     for (i = 0; i < taille; i++) {
        if (i == 0){
            printf("Saisir le %d er element : ", i + 1);
       } 
	   else{
            printf("Saisir le %d eme element : ", i + 1);

		}
        scanf("%d", &table2[i]);
    
    
}
    
  
  
  	for(i = 0; i < taille ; i++){
  		
  		tableau[i] = table[i];
  		
	  }
	  
	  for(i = 0, j = taille; j < taille * 2 && i < taille; i++, j++){

	  	
	  	tableau[j] = table2[i];
	  }
  
  //tri a bulle
  
  for(i = 0 ; i < taille*2 ; i++){
  	
  	for(j = 0 ; j <(taille*2)-1 ; j++){
	  
	  if(tableau[j] > tableau[j+1]){
	  	
	  	c = tableau[j];
	  	tableau[j] = tableau[j+1];
	  	tableau[j+1] = c;
	  }
	  
	  
	    }
  	
  
  }
  
     printf("Le tableau fusionne et trie est : ");
    for (i = 0; i < taille * 2; i++) {
        printf("%d ", tableau[i]);
    }
  
      
   return 0;
}
