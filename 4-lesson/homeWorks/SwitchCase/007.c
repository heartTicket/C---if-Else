#include <stdio.h>

int main() {
    int number, tens, ones;

    printf("Enter the number: ");
    scanf("%d", &number);

    tens = number / 10;
    ones = number % 10;

    switch (tens) {
        case 2: printf("Twenty"); break;
        case 3: printf("Thirty"); break;
        case 4: printf("Forty"); break;
        case 5: printf("Fifty"); break;
        case 6: printf("Sixty"); break;
        case 7: printf("Seventy"); break;
        case 8: printf("Eighty"); break;
        case 9: printf("Ninety"); break;
    }

    switch (ones) {
        case 1: printf(" One"); break;
        case 2: printf(" Two"); break;
        case 3: printf(" Three"); break;
        case 4: printf(" Four"); break;
        case 5: printf(" Five"); break;
        case 6: printf(" Six"); break;
        case 7: printf(" Seven"); break;
        case 8: printf(" Eight"); break;
        case 9: printf(" Nine"); break;
    }

    return 0;
}
