#include <stdio.h>
#include <stdlib.h>

//28.	Afficher la somme des nombres pairs entre 1 et n.



int main(){
	
	int a,i;
	int b = 0;
	
	printf("Saisir un entier : ");
	scanf("%d",&a);
	
	for(i = 1 ; i <= a ; i++){
		
		if(i % 2 == 0){
			
			b = b + i;
		}
	}
	
	printf("La somme de tous les chiffres pairs compris entre 1 et %d vaut %d", a, b);
	
	
	return 0;
}
