#include <stdio.h>

int main() {

    int first, second;
    char operator;

    scanf("%d %c %d", &first, &operator, &second);

    if (operator == '+') {
        printf("%d + %d = %d", first, second, first + second);
    } else {
        if (operator == '-') {
            printf("%d - %d = %d", first, second, first - second);
        } else {
            if (operator == '*') {
                printf("%d * %d = %d", first, second, first * second);
            } else {
                if (operator == '/') {
                   if (second == 0) {
                    puts("%d can't devided by 0");
                   } else {
                     printf("%d / %d = %d", first, second, first / second);
                   }
                }
            }
        }
    }
}