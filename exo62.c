#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//62.	Copier une chaîne dans une autre.


int main(){
	

	char chaine[100];
	char copie[100];
	
	printf("Saisir une chaine de caractere : ");
	scanf("%s",&chaine);
	
	 strcpy(copie,chaine);
	printf("La chaine %s a pour copie %s ",chaine,copie);
	
	
	return 0;
}
