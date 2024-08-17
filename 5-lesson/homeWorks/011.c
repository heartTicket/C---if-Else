#include <stdio.h>

int main() {

    int start = 25, over = 690;

    while (start <= over) {
        if (start % 5 == 0 && start % 9 == 0) {
            printf("%d ", start);
        }
        start += 1;
    }

    printf("\nOut of while %d", start);
    return 0;
    
}