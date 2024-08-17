#include <stdio.h>

int main() {

    int nums;

    printf("Enter the number between: ");
    scanf("%d", &nums);

    switch (nums) {
        case 1: {
            printf("One");
            break;
        }
        case 2: {
            printf("Two");
            break;
        }
        case 3: {
            printf("Three");
            break;
        }
        case 4: {
            printf("Four");
            break;
        }
        case 5: {
            printf("Five");
            break;
        }
        case 6: {
            printf("Six");
            break;
        }
        case 7: {
            printf("Seven");
            break;
        }
        case 8: {
            printf("Eigth");
            break;
        }
        case 9: {
            printf("Nine");
            break;
        }
        case 10: {
            printf("Ten");
            break;
        }
        default: {
            printf("Invalid option: Please enter only (1-10) !!!");
        }
    }

    return 0;

}