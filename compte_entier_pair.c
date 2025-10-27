#include <stdio.h>
#include <stdlib.h>

//48.	Saisir des entiers et compter combien sont pairs.  

int main(){
	
		int a;
		int compteur = 0;
		
		do{
	
	printf("Saisir un nombre (saisir -1 pour arreter): ");
	scanf("%d",&a);
	
	if(a % 2 == 0){
		
		compteur = compteur + 1;
	}
	
	
	
}while(a != -1);
	
	printf("il y a %d nombre pair ",compteur);
	
	
	
	return 0;
}



