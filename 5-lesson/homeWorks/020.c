#include <stdio.h>

int main() {

    int base, exponent;
    int result = 1;
    int i = 0;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    while (i < exponent) {
        result *= base;
        i += 1;
    }

    printf("%d to the power of %d is %d", base, exponent, result);
    
    return 0;

}