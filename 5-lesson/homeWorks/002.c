#include <stdio.h>

int main() {

    int start = 1000, over = 1;

    while (start >= over) {
        printf("%d ", start);
        start -= 1;
    }

    printf("\nOut of while %d", start);
    return 0;
    
}