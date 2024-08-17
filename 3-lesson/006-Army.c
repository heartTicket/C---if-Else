#include <stdio.h>

int main() {

    int age;
    float height, weight;

    scanf("%d%f %f", &age, &height, &weight);

    if (age < 18 || height < 159 ||  weight < 65) {
        puts("Sorry !!! There is no your place.");
    } else {
        if (height > 160 && weight < 70) {
            puts("You are Soldier");
        } else {
            if (height > 180 && weight > 70 && weight < 80) {
                puts("You are sergeant");
            } else {
                if (height < 190) {
                    puts("You are officer");
                } else {
                    if (age > 25 && height > 190) {
                        puts("Your are welcome, You became General");
                    }
                }
            }
        }
    }
return 0;
}