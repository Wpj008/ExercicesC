#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//50.	Faire une calculatrice interactive jusqu'à "exit".

int main(){
	
	char operation;
	char sorti[] = "exit";
	char quitter[10];
	double a, b, result;
	
	do{
		printf("Saisir le premier nombre : ");
		scanf("%lf", &a);
		
		printf("Saisir le deuxieme nombre : ");
		scanf("%lf", &b);
		
		// vider le buffer avant de lire le caractère
		while (getchar() != '\n');

		printf("Saisir une operation (+ - * /) : ");
		scanf("%c", &operation);

		switch(operation){
			case '+':
				result = a + b;
				printf("%lf + %lf = %lf\n", a, b, result);
				break;
			case '-':
				result = a - b;
				printf("%lf - %lf = %lf\n", a, b, result);
				break;
			case '*':
				result = a * b;
				printf("%lf * %lf = %lf\n", a, b, result);
				break;
			case '/':
				if (b != 0) {
					result = a / b;
					printf("%lf / %lf = %lf\n", a, b, result);
				} else {
					printf("Division par zero impossible !\n");
				}
				break;
			default:
				printf("Operation incorrecte !!\n");
		}
		
		printf("Saisir 'exit' pour quitter le programme ou tapez Entrée pour continuer : ");
		// vider encore le buffer avant fgets
		while (getchar() != '\n');
		if(fgets(quitter, sizeof(quitter), stdin) != NULL){
			quitter[strcspn(quitter, "\n")] = 0; // enlever le \n final
		}
		
	} while(strcmp(sorti, quitter) != 0 );

	printf("Programme termine.\n");
	
	return 0;
}
