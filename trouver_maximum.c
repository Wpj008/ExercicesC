#include <stdio.h>
#include <stdlib.h>

//44.	Saisir des entiers et trouver le max, continuer jusqu'à saisir -99.

int main(){
	
	int max = 0;
	
	int a;
	
	do{
	
	printf("Saisir un nombre (-99 pour arreter) : ");
	scanf("%d",&a);
	
	if(a > max){
		
		max = a; 
	} 
	
	
	
}while(a != -99);
	
	printf("La valeur maximum saisie est %d",max);
	
	
	return 0;
}
