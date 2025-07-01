#include <stdio.h>
#include <stdlib.h>



//13.	Saisir une lettre 'a', 'b' ou 'c' et afficher "?Option A?", etc.




int main(){


 char lettre;

printf("Saisir une Lettre entre a-d: ");
scanf("%c",&lettre);

switch(lettre){
	
	case 'a':
		printf("OPTION A");
		break;
		
		
	case 'b':
		printf("OPTION B");
		break;
		
		
	case 'c':
		printf("OPTION C");
		break;
		
		
	case 'd':
		printf("OPTION D");
		break;
		
		default:
			printf("Saisie incorrecte");
}




return 0;
}
