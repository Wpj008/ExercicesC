#include <stdio.h>
#include <stdlib.h>



//12.	Saisir un numéro de mois et afficher son nom.




int main(){
	
	int a;
	
	printf("Saisir un nombre entre 1-12 : ");
	scanf("%d",&a);
	
	switch(a){
		
	
		case 1:
			printf("Janvier");
			
			break;
		
		case 2:
			printf("Fevrier");
			
			break;
			
		case 3:
			printf("Mars");
			
			break;
			
		case 4:
			printf("Avril");
			
			break;
			
			
		case 5:
			printf("Mai");
			
			break;
			
		case 6:
			printf("Juin");
			
			break;
			
		case 7:
			printf("Juillet");
			
			break;
			
		case 8:
			printf("Aout");
			
			break;
					
		case 9:
			printf("Septembre");
			
			break;
			
		case 10:
			printf("Octobre");
			
			break;
			
		case 11:
			printf("Novembre");
			
			break;
			
		case 12:
			printf("Decembre");
			
			break;
			
			
		default:
			
			printf("Y a pas de mois avec ce numero ");
		
		
		
		
		
		
		
		
		
		
	}













return 0;
}
