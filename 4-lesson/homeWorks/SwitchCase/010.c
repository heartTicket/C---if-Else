#include <stdio.h> 

int main() {
    
    int nums;

    printf("Enter the number: ");
    scanf("%d", &nums);

    switch (nums) {
        case 1 ... 99999999: {
            printf("It's a natural number");
            break;
        }
        default: {
            printf("non natural number !!!");
        }
    }

    return 0;

}