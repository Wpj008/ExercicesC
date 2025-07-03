#include <stdio.h>
#include <stdlib.h>

//24.	Afficher les 10 premiers nombres impairs.



int main(){
	
	int i,c;

    for (i = 1; i <= 10; i++) {
    	
    	c = (i * 2)+1;
        printf("%d\n", c); 
    }

	return 0;
}
