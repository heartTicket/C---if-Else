#include <stdio.h>

int main() {

    int start = 1, over = 10, num;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (start <= over) {
        printf("%d * %d = %d\n", num, start, num * start);
        start += 1;
    }

    return 0;

}