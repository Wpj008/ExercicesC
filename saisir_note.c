#include <stdio.h>
#include <stdlib.h>

//49.	Saisir des notes jusqu'à ce qu'une note négative soit saisie.

int main(){
	
		int a;
		int compteur = 0;
		
		do{
	
	printf("Saisir une note (saisir un nombre négatig pour arreter): ");
	scanf("%d",&a);
	
	if(a >= 0){
		
		compteur = compteur + 1;
	}
	
	
	
}while(a >= 0);
	
	printf("il y a %d note(s) saisie(s) ",compteur);
	
	
	
	return 0;
}

