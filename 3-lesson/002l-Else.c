#include <stdio.h>

int main() {

    int num;

    printf("Enter the numer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        puts("Your number is can div to 2");
    } else {
        puts("your number is can't");
    }
}