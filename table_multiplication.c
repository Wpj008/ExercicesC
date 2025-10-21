#include <stdio.h>
#include <stdlib.h>

//22.	Afficher la table de multiplication d'un nombre donné.



int main(){
	
	
	int a,b,i,c;
	
	printf("Voulez vous faire la table de multiplication par combien ? : ");
	scanf("%d",&a);
	printf("\n");
	printf("De 0 jusqu'a combien ? : ");
	scanf("%d",&b);
	printf("\n");
	
	for(i = 0 ; i <= b ; i++ ){
		
		c = i * a;
		
		printf("%d * %d = %d\n",i,a,c);
		
		if(i % 10 == 0){
			
			printf("\n\n");
		}
	}
	
	
	return 0;
}
