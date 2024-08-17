#include <stdio.h>

int main() {
    
    // int num;

    // // Scanf
    // printf("Enter ur num: ");
    // scanf("%d", &num);      // Used for input num from user
    // printf("%d\n", num);

    // // Assigning variables
    // int num_1 = 22, num_2 = 11;
    // printf("%d + %d = %d\n", num_1, num_2,num_1 + num_2);

    // Scanf A
    // int num1, num2;

    // printf("Enter the 1st numbers that you want to multiple: ");
    // scanf("%d", &num1);

    // printf("Enter the 2nd: ");
    // scanf("%d", &num2);
    // printf("%d * %d = %d", num1, num2,num1 * num2);
    // return 0;

    int number1, number2;

    printf("Enter the 1st num that it will be anything: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("%d + %d = %d\n", number1, number2,number1 + number2);
    printf("%d - %d = %d\n", number1, number2,number1 - number2);
    printf("%d / %d = %d\n", number1, number2,number1 / number2);
    printf("%d * %d = %d\n", number1, number2,number1 * number2);
    return 0;
}