#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//61.	Compter le nombre de caractères dans une chaîne.


int main(){
	
	int nombre;
	
	char chaine[100];
	
	printf("Saisir une chaine de caractere : ");
	scanf("%s",&chaine);
	
	nombre = strlen(chaine);
	printf("La chaine %s a %d caractere(s)",chaine,nombre);
	

	return 0;
}
