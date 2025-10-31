#include <stdio.h>
#include <stdlib.h>

//1. Lire un entier et afficher s'il est positif, négatif ou nul.

int main(){
	
	
	int a;
	
	printf("Saisir un entier : ");
	scanf("%d",&a);
	
	if(a > 0){
		
		printf("La valeur est positive !");
		
	} else if(a == 0){
		
		printf("la valeur est nulle !");
	} else {
		
		printf("La valeur est negative !");
	}
	
	
	
	
	return 0;
}
