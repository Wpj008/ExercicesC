#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//42.	Menu jusqu'à ce que l'utilisateur choisisse "?Quitter?".

int main(){
	
	int C;
	
	do{
		
	
			printf("1.Mangue\n");
			printf("2.banane\n");
			printf("3.Avocado\n");
						
			printf("4.Quitter\n");
			
			printf("Faites votre choix : ");
			scanf("%d",&C);
			
			
		
	}while(C != 4 );
	
	
	return 0;
}
