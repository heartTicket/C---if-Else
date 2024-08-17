#include <stdio.h>

int main() {

    int start = 1, over = 140;

    while (start <= over) {
        if (start % 2 == 0) {
            printf("%d ", start);
        }
        start += 1;
    }

    printf("\nOut of while %d", start);
    return 0;

}