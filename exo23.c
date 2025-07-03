#include <stdio.h>
#include <stdlib.h>

// 23. Afficher les 10 premiers nombres pairs

int main() {
    int i,c;

    for (i = 1; i <= 10; i++) {
    	
    	c = i * 2;
        printf("%d\n", c); 
    }

    return 0;
}

