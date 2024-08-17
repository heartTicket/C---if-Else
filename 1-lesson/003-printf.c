#include <stdio.h>

// Differences between puts --> we can't use two values in puts !2 in printf

int main() {
    printf("Hello, World\n");
    printf("My name is Nigga\n");
    printf("I live in\tA'ustralia\n");
    printf("num: %d", 50);              // The %d used for outputing the value of blahblah
    printf("%d\n", 10);
    printf("Number that u entered is equal to %f nah\n", 12.0/10);   // In this case one of the value have to be full num (.00)
    printf("Number that u entered is equal to %d nah\n", 12%10);      // We can't do 12.1 because %d
    printf("%d + %d = %d", 7, 10,9 + 10);
}