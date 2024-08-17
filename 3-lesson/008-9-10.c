#include <stdio.h>

int main() {

    int number;

    printf("Enter the number between 0-10: ");
    scanf("%d", &number);

    if (number == 0) {
        puts("zero");
    } else if (number == 1) {
        puts("one");
    } else if (number == 2) {
        puts("two");
    } else if (number == 3) {
        puts("three");
    } else if (number == 4) {
        puts("four");
    } else if (number == 5) {
        puts("five");
    } else if (number == 6) {
        puts("six");
    } else if (number == 7) {
        puts("sever");
    } else if (number == 8) {
        puts("eight");
    } else if (number == 9) {
        puts("nine");
    } else if (number == 10) {
        puts("ten");
    } else {
        puts("Please enter the number between 0-10");
    }
return 0;
}