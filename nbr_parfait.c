#include <stdio.h>
#include <stdlib.h>

//35.	Vérifier si un nombre est parfait (la somme de ses diviseurs = nombre)


int main(){
	
	
	int a,i;
	
	int valeur;
	
	printf("Saisir un nombre : ");
	scanf("%d",&a);
	
	
	for(i = 1 ; i < a ; i++){
		
		if( a % i == 0){
			
			valeur = valeur + i;
		}
	}
	
	
	if( a == valeur){
		
		printf("%d est un nombre parfait",a);
	} else{
		
			printf("%d n'est un nombre parfait",a);
	}
	
	

	return 0;
}
