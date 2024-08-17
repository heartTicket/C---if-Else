#include <stdio.h>

int main() {

    int A = 1, B = 2, C = 3;

    A = B, B = C, C = A;
    
    printf("A's = %d B's = %d C's = %d", A, B, C);
}