#include <stdio.h>

int main() {

    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Your number is %d\n", number * -1);     // Alse we can do -number instead of number * -1
    } else {
        printf("You can enter the negative numbe but yours is %d", number);
    }
return 0;
}