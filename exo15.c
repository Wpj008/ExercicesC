#include <stdio.h>
#include <stdlib.h>



//15.	Saisir une opération ('+', '-', '*', '/') et deux nombres et afficher le résultat.




int main(){


int a,b,c;
char d;

printf("Saisir le premier entier : ");
scanf("%d",&a);
printf("Saisir le deuxieme entier : ");
scanf("%d",&b);

printf("choisir une operationventre +,-,*,/ : ");
scanf(" %c", &d);

switch(d){
	
	case '+':
		c = a + b;
		
		printf("%d + %d = %d", a,b,c);
		break;
		
		
	case '-':
		c = a - b;
		
		printf("%d - %d = %d", a,b,c);
		break;
		
		
	case '*':
		c = a * b;
		
		printf("%d * %d = %d", a,b,c);
		break;
		
		
	case '/':
		c = a / b;
		
		printf("%d / %d = %d", a,b,c);
		break;
	
	default:
		printf("Operation incorrecte ");
	
	
	
	
}











return 0;
}
