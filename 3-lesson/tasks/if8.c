#include <stdio.h>

int main() {
    
    int first, second;

    printf("Enter you first number: ");
    scanf("%d", &first);

    printf("Enter your second number: ");
    scanf("%d", &second);

    if (first > second) {
        printf("%d %d", first, second);
    } else {
        printf("%d %d", second, first);
    }
return 0;
}