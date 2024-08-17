#include <stdio.h>

int main() {

    int A, B;
    int summ;

    printf("Enter the A: ");
    scanf("%d", &A);
    
    printf("Enter the B: ");
    scanf("%d", &B);

    if (A != B) {
        summ = A + B;
        A = summ;
        B = summ;
    } else {
        A = 0;
        B = 0;
    }
}