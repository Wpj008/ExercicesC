#include <stdio.h>
#include <stdlib.h>

//32.	Lire des nombres jusqu'à saisir 0 et afficher leur somme.


int main(){
	
	int a;
	int somme = 0;

	
	while(a != 0){
		
		printf(" saisir un nombre (saisir 0 pour voir la somme): ");
		scanf("%d",&a);
		
		somme = somme + a ;
		
		
		
	}
	
	printf("La somme de tous les nombres saisis est de %d",somme);
	
	
	return 0;
}
