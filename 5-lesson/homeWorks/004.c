#include <stdio.h>

int main() {
    
    int start = 300, over = 150;

    while (start >= over) {
        printf("%d ", start);
        start -= 1;
    }

    printf("\nOut of while %d", start);
    return 0;
    
}