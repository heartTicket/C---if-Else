#include <stdio.h>

int main() {

    int start = 1, over = 4000;

    while (start <= over) {
        if (start % 11 == 0 && start % 3 == 0 && start % 9 == 0) {
            printf("%d ", start);
        }
        start += 1;
    }

    printf("\nOut of while %d", start);
    return 0;
}