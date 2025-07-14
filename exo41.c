#include <stdio.h>
#include <stdlib.h>

//41.	Lire un nombre entre 1 et 10, redemander tant que ce n'est pas correct.

int main(){
	
	int compteur = 7;
	int a;
	
	do{
		
		printf("Devinez le nombre magique : ");
		scanf("%d",&a);
		
		if(a != compteur){
			
			printf("ce n'est pas le bon nombre reessayer !\n ");
		} else{
			
			printf("Bravoooo ! Vous avez trouve !");
		}
		
		
	}while(a != compteur);
	
	
	
	
	
	
	
	
	return 0;
}
