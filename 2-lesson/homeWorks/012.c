#include <stdio.h>

int main() {

    int num;
    
    printf("Enter your number (only ***): ");
    scanf("%d", &num);

    printf("%d%d%d", num % 10, num / 10 % 10, num / 100);
}