#include <stdio.h>
#include<stdlib.h>

//2.	Lire deux entiers et afficher le plus grand.


int main(){
	
	int a,b;
	
	printf("Saisir la premiere valeur : ");
	scanf("%d",&a);
	printf("\n");
	printf("Saisir la deuxieme valeur : ");
	scanf("%d",&b);
	
	
	if(a > b){
		
		printf("la valeur la plus grande est %d ",a);
	} else if(b > a){
		
			printf("la valeur la plus grande est %d ",b);
	}else{
		
			printf("les valeurs sont egales !!");
	}
	
	
	
	
	
	
	return 0;
}
