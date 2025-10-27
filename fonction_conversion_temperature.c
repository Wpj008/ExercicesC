#include <stdio.h>
#include <stdlib.h>

//57.	Fonction pour convertir Celsius en Fahrenheit

float celsius_Fahrenheit(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("%.2f C = %.2f F\n", celsius, fahrenheit);
    return fahrenheit;
}

int main() {
    float celsius, resultat;

    printf("Saisir la temperature en Celsius : ");
    scanf("%f", &celsius);

    resultat = celsius_Fahrenheit(celsius);

    
	
	
	return 0;
}
