#include <stdio.h>

int main() {

    int start = 200, over = -500;

    while (start >= over) {
        printf("%d ", start);
        start -= 1;
    }

    printf("\nOut of while %d", start);
    return 0;
    
}