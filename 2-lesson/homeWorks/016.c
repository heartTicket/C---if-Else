#include <stdio.h> 

int main() {

    float SArea, radius, height, PI = 3.14159;

    printf("Enter the radius of cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height: ");
    scanf("%f", &height);

    SArea = 2 * PI * radius * height + 2 * PI * radius * radius;

    printf("The Surface Area of this cylinder is equal to %.2f", SArea);
    return 0;
}