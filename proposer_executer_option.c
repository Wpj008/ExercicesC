#include <stdio.h>
#include <stdlib.h>



//20.	Menu interactif : proposer 3 options et exécuter selon le choix.




int main(){

int a;

printf("1.  Bonjour\n");
printf("2.  Au revoir\n");
printf("3.  Aide moi\n");

printf("Faites un choix : ");
	scanf("%d",&a);

switch(a){
	
	
	case 1:
		printf("Bonjour ");
		break;
		
	case 2:
		printf("Au revoir ");
		break;
		
	case 3:
		printf("Aide moi ");
		break;
		
		default:
			printf("Valeur inconnue ");
}









return 0;
}
