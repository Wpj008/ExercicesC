#include <stdio.h>
#include <stdlib.h>


//55.	Fonction qui calcule la moyenne de trois notes.

int moyenne(int a, int b, int c){
	
	int moyen;
	
	printf("Saisir la premiere note : ");
	scanf("%d",&a);
	
	printf("Saisir la deuxieme note : ");
	scanf("%d",&b);
	
	printf("Saisir la troisieme note : ");
	scanf("%d",&c);
	
	moyen = (a+b+c)/3;
	
	printf("la moyenne est de %d",moyen);
	
	return moyen;	
	
}

int main(){
	
	int a,b,c;
	int result;
  moyenne(a,b,c);
		
	return 0;
}
