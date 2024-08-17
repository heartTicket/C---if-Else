#include <stdio.h>

int main() {

    int side_length;
    int volume;

    printf("Enter one side lenth of cube: ");
    scanf("%d", &side_length);

    volume = side_length * side_length * side_length;

    printf("One side of cube's lenth is %d then the volume of cube is equal to %d\n", side_length, volume);
    return 0;
}