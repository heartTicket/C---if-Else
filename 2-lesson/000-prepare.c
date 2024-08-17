#include <stdio.h>

int main() {
    
    int num = 12.5;
    float PI = 3.458;

    printf("%f\n", (float)num);
    printf("%d\n", PI);         // It comes from RAM
    printf("%d\n", (int)PI);
}