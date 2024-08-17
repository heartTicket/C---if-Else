#include <stdio.h>

int main() {

    float first, second;

    printf("Enter your first number: ");
    scanf("%f", &first);

    printf("Enter your second number: ");
    scanf("%f", &second);

    if (first > second) {
        printf("%.2f is Greater than %.2f", first, second);
    } else {
        printf("%.2f is Less than %.2f", first, second);
    }
return 0;
}