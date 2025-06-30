#include <stdio.h>
#include<stdlib.h>

//7.	Vérifier si un nombre est divisible par 3 et par 5.


int main(){

int a;

printf("Saisir un nombre : ");
scanf("%d",&a);

if(a % 3 == 0 && a % 5 == 0){
	
	printf("Le nombre %d est divisible par 3 et par 5 ",a);
}else{
	
	printf("Le nombre %d n est pas divisible par 3 et par 5 ",a);			
}

return 0;

}
