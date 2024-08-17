#include <stdio.h>

int main() {

    int side_length;

    printf("Enter side length of cube: ");
    scanf("%d", &side_length);

    printf("The cube's one side length is %d then it's surface area is = %din3\n",side_length, 6 * side_length * side_length);
    return 0;
}