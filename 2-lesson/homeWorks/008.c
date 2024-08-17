#include <stdio.h>

int main() {

    // int pum;

    // printf("Enter the number (only ***): ");
    // scanf("%d", &pum);

    // printf("ones = %d\n", pum % 10);

    // printf("tens = %d\n", pum / 10 % 10);

    // printf("hundreds = %d\n", pum / 100);
    // return 0;

    // Second method ####

    /*
    int num, ones, tens, hundreds;

    printf("Enter the number (only ***): ");
    scanf("%d", &num);

    ones = num % 10;
    tens = num / 10 % 10;
    hundreds = num / 100;

    printf("ones = %d\n", ones);
    printf("tens = %d\n", tens);
    printf("hundreds = %d\n", hundreds); 
    return 0; */

    // third method with mean ####
    int num, ones, tens, hundreds;
    float mean;

    printf("Enter numbers (only ***): ");
    scanf("%d", &num);

    ones = num % 10;
    tens = num / 10 % 10;
    hundreds = num / 100;

    mean = (ones + tens + hundreds) / 3.0;

    printf("Hundreds = %d\n", hundreds);
    printf("Tens = %d\n", tens);
    printf("Ones = %d\n", ones);
    printf("Mean = %0.2f", mean);
}