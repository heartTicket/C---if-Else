#include <stdio.h>

int main() {

    int start = 50, over = 440;

    while (start <= over) {
        if (start % 11 == 0) {
            printf("%d ", start);
        }
        start += 1;
    }

    printf("\nOut of while %d", start);
    return 0;
    
}