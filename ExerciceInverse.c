#include<stdio.h>
#include<stdlib.h>

/*Ecrire un programme C qui permet de lire en entrée un entier
constitué de trois chiffres et d’afficher celui-ci inversé.
Exemple: si l’entrée est 123 on affiche 321*/

int main ()
{
    int a,b,c,d;
    printf("entrez un entier de 3 chiffres : ");
    scanf("%d",&a);
    b = (a%10)*100;
    a = a/10 ;
    b = b +(a%10)*10;
    a = a/10;
    b = b+a;

    printf("Final : %d\n", b);

    return 0;
}
