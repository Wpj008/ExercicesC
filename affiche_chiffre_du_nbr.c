#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//33.	Afficher les chiffres d'un nombre un par un (ex: 123 ? 1 2 3).


int main(){
	
int a,i;
char chaine[10];

printf("Saisir un nombre : ");
scanf("%d",&a);

//conversion de l'entier en chaine

sprintf(chaine,"%d", a);

 // Affichage de la chaîne caractère par caractère
 
  printf("Les chiffres qui composent le nombre sont : \n");
  for (i = 0; chaine[i] != '\0'; i++) {
    printf("%c\n ", chaine[i]);
  }
  printf("\n");

  return 0;
}	
	
	
