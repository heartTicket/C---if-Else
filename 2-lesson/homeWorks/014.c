#include <stdio.h>

int main() {

    int Celsius, Fahrenheit;

    printf("Enter cesius for converting to Fahrenheit: ");
    scanf("%d", &Celsius);

    Fahrenheit = (Celsius * 9 / 5) + 32;

    printf("%d degrees Celsius is equal %d Farhenheit.\n" , Celsius, Fahrenheit);
}