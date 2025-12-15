#include <stdio.h>
#include <stdlib.h>

//26.	Factorielle d'un nombre.



int main(){
	
	int a,i;
	int b = 1;
	
	printf("Saisir un entier : ");
	scanf("%d",&a);
	
	for(i = 1 ; i <= a ; i++){
		
		b = b * i;
		
		
	}
	
	printf("La factorielle de %d = %d",a,b);
	
	return 0;
}
