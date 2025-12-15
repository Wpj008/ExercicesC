#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//47.	Vérifier un mot de passe jusqu'à ce qu'il soit correct.

int main(){
	
	char mdp[100];
	char mot[100];
	
	printf("Saisir un mot de passe : ");
if(fgets(mdp, sizeof(mdp), stdin) != NULL);
	
	
	do{
		
		printf("Saisir le mot de passe : ");
	if(fgets(mot, sizeof(mot), stdin) != NULL);	
		
		
		if(strcmp(mdp, mot) != 0){
			
			printf("Le mot de passe n'est pas correct \n");
		} else{
			
			printf("Bravo ! Mot de passe correct ");
		}
		
		
		
	}while(strcmp(mdp,  mot) != 0);
		
	
	
	return 0;
}



