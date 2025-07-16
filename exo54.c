#include <stdio.h>
#include <stdlib.h>

//54.	Fonction pour vérifier si un nombre est pair.

int pair(int a){
	
	printf("saisir un entier : ");
	scanf("%d",&a);
	
	if(a % 2 == 0){
		
		printf("%d est un nombre pair",a);
	} else {
		
		printf("%d n'est un nombre pair",a);
	}
	
	
	
}

int main(){
	
	int a;
	
	pair(a);
	
	
	return 0;
}
