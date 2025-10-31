#include <stdio.h>
#include <stdlib.h>



//14.	Calculer le prix final selon un code promo (A=10%, B=20%, C=30%).




int main(){


float a,c; 
char b;

printf("Saisir le prix : ");
scanf("%f",&a);
printf("\n");
printf("saisir le code promo : ");
scanf(" %c",&b);

switch(b){
	
	case 'A':
		
	c = a - (a * 10)/100;
	printf("Le prix final est %.2f $", c);
	
	break;
	
	
	case 'B':
		
	c = a - (a * 20)/100;
	printf("Le prix final est %.2f $ ", c);
	
	break;
	
	
	case 'C':
		
	c = a - (a * 30)/100;
	printf("Le prix final est %.2f $", c);
	
	break;
	
	
	case 'D':
		
	c = a - (a * 50)/100;
	printf("Le prix final est %.2f $ ", c);
	
	break;
	
	default:
		printf("Code Promo incorrect ");
	
	
}










return 0;
}
