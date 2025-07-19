#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//63.	Convertir une chaîne en majuscules.



void Majuscule(char saisie[]) {
	

	int i;
	
  for ( i = 0; saisie[i] != '\0'; i++) {
    saisie[i] = toupper(saisie[i]);
  }
}

int main() {
	
	
  	char chaine[100];
	//char copie[100];
	
	printf("Saisir une chaine de caractere : ");
	scanf("%s",&chaine);
	
  printf("Chaine originale: %s\n", chaine);
  
  Majuscule(chaine);
  printf("Chaine en majuscules: %s\n", chaine);
  
  
  return 0;
}
