#include <stdio.h>
#include <stdlib.h>

//46.	Deviner un nombre secret (boucle jusqu'à trouver).

int main(){
	
	int compteur = 15;
	int a;
	
	do{
	
	printf("deviner le nombre magique : ");
	scanf("%d",&a);
	
	if(a > compteur){
		
		printf("Le nombre saisi est superieur au nombre magique !\n");
	} else if(a < compteur){
		
		printf("Le nombre saisi est inferieur au nombre magique !\n");
	 } else{
	 	
	 	printf("Bravo ! Vous avez trouve le nombre magique !");
	 }
	
	
	
	
	
}while(a != compteur);
	
	
	
	return 0;
}



