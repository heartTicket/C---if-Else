#include <stdio.h>

int main() {

    int angle, normalized_angle;

    printf("Enter your degree: ");
    scanf("%d", &angle);

    normalized_angle = angle % 360;

    printf("your turned degree is %d", normalized_angle);
    return 0;
}