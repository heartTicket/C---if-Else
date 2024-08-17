#include <stdio.h> 

int main() {

    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num > 0 && num % 2 == 0) {
        puts("Congrats you r WINNER !!!");
    } else {
        puts("Try HARDER !!!");
    }
return 0;
}