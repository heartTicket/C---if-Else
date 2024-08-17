#include <stdio.h>

int main() {

    int length;
    int width;
    int Perm;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    Perm = 2 * (length + width);

    printf("The length of rectangle is %d and the width is %d. The Perimeter of the rectangle is %d\n", length, width, Perm);
    return 0;
}