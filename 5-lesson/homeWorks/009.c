#include <stdio.h>

int main() {

    int start = 40, over = 180;

    while (start <= over) {
        if (start % 7 == 0) {
            printf("%d ", start);
        }
        start += 1;
    }

    printf("\nOut of while %d", start);
    return 0;

}