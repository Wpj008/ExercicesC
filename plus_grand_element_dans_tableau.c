#include <stdio.h>
#include <stdlib.h>

//72.	Trouver le plus grand élément d'un tableau.

int main(){

int taille;
int i; 

int max ;

printf("Saisir la taille du tableau : ");

scanf("%d",&taille);

int tab[taille];
for(i = 0 ; i < taille ; i++){
	
printf("Saisir le nombre a la position %d : ",i);
scanf("%d",&tab[i]);
}



for(i = 0 ; i < taille ; i++){
	
		
	if(max < tab[i]){
		
		max = tab[i];
	}
	
}

printf("Dans la serie saisie, le plus grand nombre est %d ",max);



return 0;
}
