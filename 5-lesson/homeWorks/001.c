#include <stdio.h>

int main() {

    int start = 1, over = 800;

    while (start <= over) {
        printf("%d ", start);
        start += 1;
    }

    printf("\nOut of while %d", start);
    return 0;

}