#include <stdio.h>
#include<stdlib.h>


//10.	Lire trois côtés et dire si c'est un triangle équilatéral, isocèle ou quelconque.



int main() {
    int a, b, c;

    printf("Entrez le premier cote du triangle : ");
    scanf("%d ", &a);
      printf("Entrez le deuxieme cote du triangle : ");
    scanf("%d ", &b);

      printf("Entrez le troisieme cote du triangle : ");
    scanf("%d ", &c);

    // Vérifier si c'est bien un triangle
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("C est un triangle equilateral.\n");
        } else if (a == b || a == c || b == c) {
            printf("C est un triangle isocele.\n");
        } else {
            printf("C est un triangle quelconque (scalene).\n");
        }
    } else {
        printf("Ces côtés ne forment pas un triangle.\n");
    }

    return 0;
}

