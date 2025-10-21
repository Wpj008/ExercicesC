#include <stdio.h>
#include <stdlib.h>

//53.	Fonction pour trouver le max de deux nombres.

int maximum(int a, int b){
	

	printf("saisir le premier entier : ");
	scanf("%d",&a);
	
	printf("saisir le deuxieme entier : ");
	scanf("%d",&b);
	
	if( a > b){
		
		printf("%d est supperieur a %d",a,b);
	} else if ( a < b){
		
		printf("%d est supperieur a %d",b,a);
	} else {
		
			
		printf("%d est equivalent a %d",a,b);
	}
	

}

int main(){
	
	int a,b;
	
	maximum(a,b);
	
	return 0;
}



