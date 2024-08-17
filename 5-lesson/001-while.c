#include <stdio.h>

int main() {

    int start = 0, over = 10, step = 1;

    while (start <= over) {
        printf("%d ", start);
        start += step;
    }

    printf("\nstart = %d", start);
    
    return 0;
}