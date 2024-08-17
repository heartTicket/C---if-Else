#include <stdio.h> 

int main() {

    int num; 

     printf("Enter the number: ");
     scanf("%d", &num);

    // if (num > 0) {
    //     puts("Greater than 0");
    //     printf("your number is %d", num);
    // }

    // if (num < 0) {
    //     puts("Less than 0");
    //     printf("your number is %d", num);
    // }

    // if (num == 0) {
    //     puts("Your number is 0");
    // }

    if (num > 0) {
        puts("Greater than 0");
    } else if (num < 0) {
        puts("Less than 0");
    } else {
        printf("Your number is equal to 0");
    }
return 0;
}