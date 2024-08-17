#include <stdio.h>

int main() {

    int start = 20, over = 420;

    while (start <= over) {
        if (start % 5 == 0 && start % 10 != 0) {
            printf("%d ", start);
        }
        start += 1;
    }

    printf("\nOut of while %d", start);
    return 0;
    
}