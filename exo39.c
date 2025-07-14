#include <stdio.h>
#include <stdlib.h>

//39.	Trouver tous les diviseurs d'un nombre.


int main(){
	
		int a;
	
	int i = 1;
	 printf("Saisir un nombre : ");
    scanf("%d", &a);


	while(i <= a){
		
		if(a % i == 0){
			
			printf("%d est un diviseur de %d\n",i,a);
		}
		
		
		i++;
	}
	
	
	return 0;
}
