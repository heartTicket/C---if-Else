#include <stdio.h>

int main() {

    int first, second;

    printf("Enter your first number: ");
    scanf("%d", &first);

    printf("Enter your second number: ");
    scanf("%d", &second);

    if (first > second) {
        printf("%d is greater than %d\n", first, second);
    } else {
        printf("%d is greater than %d", second, first);
    }
return 0;
}