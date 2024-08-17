#include <stdio.h>

int main() {

    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num > 0) {
        num += 1;
        printf("%d", num);
    } else {
        num -= 2;
        printf("%d", num);
    }
}