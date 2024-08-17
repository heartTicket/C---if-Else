#include <stdio.h>

int main() {

    int start = 90, over = 210;

    while (start <= over) {
        if (start % 25 == 0) {
            printf("%d ", start);
        }
        start += 1;
    }

    printf("\nOut of while %d", start);
    return 0;
    
}