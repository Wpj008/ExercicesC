#include <stdio.h>
#include <stdlib.h>

//51.	Écrire une fonction qui retourne la somme de deux entiers.

int addition(int a, int b){
	
	int somme;
	
	printf("saisir le premier entier : ");
	scanf("%d",&a);
	
	printf("saisir le deuxieme entier : ");
	scanf("%d",&b);
	
	somme = a + b;
	
	printf("%d + %d = %d",a,b,somme);
	return somme;
}

int main(){
	
	int a,b,somme;
	
	somme = addition(a,b);

	
	return 0;
}
