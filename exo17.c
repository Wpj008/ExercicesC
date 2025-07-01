#include <stdio.h>
#include <stdlib.h>



//17.	Saisir une note (A/B/C/D/F) et afficher la mention correspondante.


int main(){

char note;

printf("Saisir la note entre A-F : ");
scanf(" %c",&note);

switch(note){
	
	case 'A':
		printf("Excellent");
		break;
	
	
	case 'B':
		printf("Tres Bien");
		break;
		
		
	case 'C':
		printf("Bien");
		break;
		
		
	case 'D':
		printf("Passable");
		break;
		
		
	case 'E':
		printf("Insuffisant");
		break;
		
		
	case 'F':
		printf("Eche");
		break;
	
	default:
		printf("cote incorecte");
	
	
	
	
	
	
	
	
	
	
}











return 0;
}
