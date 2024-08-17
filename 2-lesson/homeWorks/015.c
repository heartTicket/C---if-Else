#include <stdio.h>

int main() {

    float volume, radius, height, PI = 3.14159;

    printf("Enter the radius of cylinder: ");
    scanf("%f", &radius);

    printf("Etner the height: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;
    printf("The volume of this cylinder is equal to %.2f\n", volume);
    return 0;
}