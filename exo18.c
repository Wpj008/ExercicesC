#include <stdio.h>
#include <stdlib.h>



//18.	Saisir un caractère et dire s'il est une voyelle (avec switch).




int main(){

char lettre;

printf("saisir une lettre : ");
scanf(" %c",&lettre);

switch(lettre){
	
	case 'A': 
	printf("Voyelle");
	break;
	
	case 'E': 
	printf("Voyelle");
	break;
	
	case 'I': 
	printf("Voyelle");
	break;
	
	case 'O': 
	printf("Voyelle");
	break;
	
	case 'U': 
	printf("Voyelle");
	break;
	
	case 'Y': 
	printf("Voyelle");
	break;
	
	case 'a': 
	printf("Voyelle");
	break;

	case 'e': 
	printf("Voyelle");
	break;
	
	case 'i': 
	printf("Voyelle");
	break;
	
	case 'o': 
	printf("Voyelle");
	break;
	
	
	case 'u': 
	printf("Voyelle");
	break;
	
	case 'y': 
	printf("Voyelle");
	break;
	
	default:
		printf("Consonne");	
	
	
	
}


return 0;
}
