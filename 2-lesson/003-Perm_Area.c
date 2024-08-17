#include <stdio.h>

int main() {

    int l, w, P, A;

    printf("Enter the length of rectangle: ");
    scanf("%d", &l);

    printf("Enter the width of rectangle: ");
    scanf("%d", &w);

    P = 2 * (l + w);
    A = l * w;
    printf("Perimeter of this rectangle is %d\n", P);
    printf("Area of this rectangle is %d\n", A);
    return 0;
} 