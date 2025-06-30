#include <stdio.h>
#include<stdlib.h>

//4.	Lire trois nombres et afficher le plus petit.

int main(){
	
	
	int a,b,c,d;
	
	
	printf("saisir le premier nombre : ");
	scanf("%d",&a);
	
		printf("saisir le deuxieme nombre : ");
	scanf("%d",&b);
		printf("saisir le troisieme nombre : ");
	scanf("%d",&c);
	
	 d = a;

    if (b < d) {
        d = b;
    }

    if (c < d) {
        d = c;
    }
	
    printf("La plus petite valeur est %d", d);

  	return 0;
}
