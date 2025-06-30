#include <stdio.h>
#include<stdlib.h>

//6.	Lire l'âge et afficher "mineur" ou "majeur".

int main(){
	
	
	int age;
	
	printf("Quel est votre age ? : ");
	scanf("%d",&age);
	
	if(age > 18){
		
		printf("Vous etes majeur ");
	}else{
		printf("Vous etes mineur");
	}
	
	
	
	return 0;
}
