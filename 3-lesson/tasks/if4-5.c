#include <stdio.h>

int main() {

    int a = 5, b = -16, c = 8;
    int counted_numbers = 0;
    int discounted_numbers = 0;

    if (a > 0) {
        counted_numbers += 1;
    } else {
        discounted_numbers += 1;
    }

    if (b > 0) {
        counted_numbers += 1;
    } else {
        discounted_numbers += 1;
    }

    if (c > 0) {
        counted_numbers += 1;
    } else {
        discounted_numbers += 1;
    }

    printf("counted numbers are = %d\nDiscounted numbers are = %d", counted_numbers, discounted_numbers);

return 0;
}   