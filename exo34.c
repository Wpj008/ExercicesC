#include <stdio.h>
#include <stdlib.h>

//34.	Trouver le plus grand nombre d'une série (jusqu'à saisir -1)


int main(){
	
	
	int a;
		
		int max = 0;
		
		while(a != -1){
		
		printf(" saisir un nombre (saisir -1 pour voir la valeur maximale): ");
		scanf("%d",&a);
		
		if( a > max){
			
			max = a;
		}
		
		
		
	}
	
	printf("La valeur maximale de tous les nombres saisis est %d",max);
	
	
	
	return 0;
}
