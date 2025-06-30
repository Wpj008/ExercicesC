#include <stdio.h>
#include<stdlib.h>


//9.	Vérifier si un nombre est compris entre 10 et 100 inclus.

int main(){
int a;

printf("Saisir un nombre : ");
scanf("%d",&a);

if(a>10 && a <= 100){
	
	printf("Le nombre %d est dans l'intervalle ",a);
}else{
	
		printf("Le nombre %d n est pas dans l'intervalle ",a);
}

return 0;
}
