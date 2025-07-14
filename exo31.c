#include <stdio.h>
#include <stdlib.h>

//31.	Compter de 1 à n avec while.


int main(){
	
	int a;
	
	int i = 1;
	
	printf("Saisir un entier : ");
	scanf("%d",&a);
	
	while( i <= a){
		
		printf("%d\n",i);
		
		i++;
	}
	
	
	return 0;
}





