#include <stdio.h>

int main() {

    int start = 1, limit;

    printf("Enter a number: ");
    scanf("%d", &limit);

    while (start * start <= limit) {
        printf("%d", start * start);
        if ((start + 1) * start <= limit) {
            printf(", ");  // Add a comma between numbers
        }
        start += 1;
    }

    return 0;
}
