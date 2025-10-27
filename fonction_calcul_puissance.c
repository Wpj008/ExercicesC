#include <stdio.h>
#include <stdlib.h>

//56.	Fonction pour calculer la puissance (x^y).

int puissance(int a, int b){
	
	int i = 0;
	int c = 1;
	
printf("saisir un nombre : ");
	scanf("%d",&a);
	
	printf("saisir l'exposent : ");
	scanf("%d",&b);
	
		
		while(i < b){
		
		c = c * a;
		
		i++;
	}
	
	printf("%d esposent %d vaut %d",a,b,c);
}

int main(){
	
	int a,b;
	
	puissance(a,b);
	
	
	
	return 0;
}
