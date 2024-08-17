#include <stdio.h>

int main() {

    int start = 0, over = 10, step = 1;

    while (start <= over) {
        if (start % 2 == 0) {
            printf("%d ", start);
        }

        start += step;

    }

    return 0;
    
}