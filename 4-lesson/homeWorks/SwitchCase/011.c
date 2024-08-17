#include <stdio.h>

int main() {

    int nums;

    printf("Enter the nubmer: ");
    scanf("%d", &nums);

    switch (nums) {
        case 0 ... 9: {
            printf("Ones");
            break;
        }
        case 10 ... 99: {
            printf("Tens");
            break;
        }
        case 100 ... 999: {
            printf("Hundreds");
            break;
        }
        case 1000 ... 9999: {
            printf("Thousands");
            break;
        }
        case 10000 ... 99999: {
            printf("Ten thousands");
            break;
        }
        default:
            printf("Invalid option: It's filming big number !!!");
    }

    return 0;
    
}