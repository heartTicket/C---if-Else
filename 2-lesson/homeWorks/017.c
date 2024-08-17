#include <stdio.h>

int main() {

    char character;

    printf("Enter the character (a-z): ");
    scanf("%c", &character);

    printf("%c", character - 32);
}