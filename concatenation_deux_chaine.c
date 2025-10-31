#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//70.	Concaténer deux chaînes.


int main(){
	
		char chaine1[100];
	char chaine2[100];
	
	printf("Saisir la premiere chaine de caractere : ");
	scanf("%s",&chaine1);
	
	printf("Saisir la deuxieme chaine de caractere : ");
	scanf("%s",&chaine2);
	
	strcat(chaine1,chaine2);
	
	printf("La chaine apres comncatenation vaut : %s",chaine1);
	
	return 0;
}
