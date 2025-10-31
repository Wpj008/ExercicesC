#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//64.	Vérifier si deux chaînes sont identiques.


int main(){
	
	
	char chaine1[100];
	char chaine2[100];
	
	printf("Saisir la premiere chaine de caractere : ");
	scanf("%s",&chaine1);
	
	printf("Saisir la deuxieme chaine de caractere : ");
	scanf("%s",&chaine2);
	
	if(strcmp(chaine1,chaine2) == 0){
		
		printf("Les chaines sont identiques");
	} else {
		
		printf("Les chaines ne sont pas identiques");
	}
	
	
	return 0;
}
