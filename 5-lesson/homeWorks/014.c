#include <stdio.h> 

int main() {

    int start = 1, limit;

    printf("Enter the number: ");
    scanf("%d", &limit);

    while (start <= limit) {
        printf("square of %d is equal to %d\n", start, start * start);
        start += 1;
    }

    printf("\nOut of while %d", start);
    return 0;

}