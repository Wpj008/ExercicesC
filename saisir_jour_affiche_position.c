#include <stdio.h>
#include <stdlib.h>



//16.	Saisir un jour (1-7) et afficher si c'est week-end ou semaine.




int main(){


int a;

printf("Saisir un chiffre entre 1-7 : ");
scanf("%d",&a);

switch(a){
	
	case 1:
		printf("Lundi, jour de la semaine");
		break;
	
	
	case 2:
		printf("mardi, jour de la semaine");
		break;
		
		
	case 3:
		printf("Mercredi, jour de la semaine");
		break;
		
		
	case 4:
		printf("Jeudi, jour de la semaine");
		break;
		
		
	case 5:
		printf("Vendredi, jour de la semaine");
		break;
		
		
	case 6:
		printf("Samedi, week end");
		break;
		
		
	case 7:
		printf("Dimanche, week end");
		break;
		
	default:
		printf("Chiffre incorret");
	
	
	
	
	
	
	
}










return 0;
}
