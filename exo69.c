#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//69.	Remplacer toutes les voyelles par '*'.


int main(){
	

    char str[100];
    int i;

    printf("Saisir une phrase : ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            str[i] = '*';
        }
    }

    printf("Phrase modifiee : %s\n", str);


	
	return 0;
}
