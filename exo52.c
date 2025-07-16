#include <stdio.h>
#include <stdlib.h>

//52.	Écrire une fonction pour calculer la factorielle.

int facto(int a){
	
	int b = 1;
	int i;
	
		printf("saisir un entier : ");
	   scanf("%d",&a);
	
	
	for(i = 1 ; i <= a; i++){
		
		b = b * i;
	}
	
	printf("La factorielle de %d vaut %d",a,b);
	
	
	
	return b;
	
}

int main(){
	
	
	int a, result;
	
	result = facto(a);
	
	
	
	return 0;
}
