#include <stdio.h>

int main() {

    int length;
    int width;
    int S_area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    S_area = length * width;    // Or there is I have to use 6 * (length * width)

    printf("The length of rectangle is %d and the width is %d. The surface area of the rectangle is %d\n", length, width, S_area);
    return 0;
}