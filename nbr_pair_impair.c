#include <stdio.h>
#include<stdlib.h>

//3.	Vérifier si un entier est pair ou impair.

int main(){
	
	int a;
	
	printf("Saisir un nombre : ");
	scanf("%d",&a);
	
	if(a % 2 == 0){
		
		printf("Le nombre %d est pair ",a);
	}else{
				printf("Le nombre %d est impair ",a);
	}
	
		
	
	return 0;
}
