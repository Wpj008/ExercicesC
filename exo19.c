#include <stdio.h>
#include <stdlib.h>



//19.	Saisir une couleur ('r', 'v', 'b') et afficher son nom.




int main(){


char lettre;

printf("Saisir l'initial d'une couleur en minuscule : ");
scanf(" %c",&lettre);

switch(lettre){
	
	case 'r':
		printf("Rouge");
		break;
		
		
	case 'j':
		printf("Jaune");
		break;
		
		
	case 'v':
		printf("Vert");
		break;
		
		
	case 'n':
		printf("Noir");
		break;
		
		
	case 'b':
		printf("Blanc");
		break;
		
		
	case 'o':
		printf("Orange");
		break;
		
		default:
			printf("saisie incorrete ");
	
	
	
	
	
	
	
	
	
	
	
}










return 0;
}
