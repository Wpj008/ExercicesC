#include <stdio.h>
#include <stdlib.h>

//71.	Saisir 10 entiers et afficher leur somme.

int main(){

int tab[10];

int i;

int somme = 0;

for(i = 1 ; i <= 10 ; i++){
printf("Saisir le nombre a la position %d : ",i);
scanf("%d",&tab[i]);

}

for(i = 0 ; i < 10 ; i++){
	
	somme = somme + tab[i];
	
	}

printf("La somme des elements saisis est de %d ", somme);




return 0;
}
