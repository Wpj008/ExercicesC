#include <stdio.h>
#include <stdlib.h>

//37. Compter le nombre de chiffres d'un nombre

int main(){
    int a;
    int i = 0;

    printf("Saisir un nombre : ");
    scanf("%d", &a);

    
    if (a == 0) {
        i = 1;
    } else {
        while (a != 0) {
            a = a / 10;  
            
            i++;
        }
    }

    printf("Nombre de chiffres : %d\n", i);

    return 0;
}

