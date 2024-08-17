#include <stdio.h>

int main() {

    int a, b;
    int summ = 0;

    printf("Enter the number: ");
    scanf("%d %d", &a, &b);

    while (a <= b) {
        printf("%d ", a);
        summ += a;
        a += 1;
    }

    printf("\n the summ is = %d", summ);
    return 0;

}-