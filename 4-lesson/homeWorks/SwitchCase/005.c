#include <stdio.h>

int main() {
    float first = 9, second = 2;
    int operator = 1;

    printf("Enter the operator: ");
    scanf("%d", &operator);

    switch (operator) {
        case 1: {
            printf("%.2f + %.2f = %.2f", first, second, first + second);
            break;
        }  
        case 2: {
            printf("%.2f - %.2f = %.2f", first, second, first - second);
            break;
        }  
        case 3: {
            printf("%.2f / %.2f = %.2f", first, second, first / second);
            break;
        } 
        case 4: {
            printf("%.2f * %.2f = %.2f", first, second, first * second);
            break;
        }   
        default: {
            printf("Invalid option: Please enter only between 1-4 !!!");
        }  
    }

    return 0;

}