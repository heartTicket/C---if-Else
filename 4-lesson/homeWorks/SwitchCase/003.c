#include <stdio.h>

int main() {

    int month;

    printf("Please enter the month (1-12):");
    scanf("%d", &month);

    switch (month) {
        case 12:
        case 1:
        case 2: {
            printf("Winter");
            break;
        }
        case 3 ... 5: {
            printf("Spring");
            break;
        }
        case 6 ... 8: {
            printf("Summer");
            break;
        }
        case 9 ... 11: {
            printf("Autumn");
            break;
        }
        default: {
            printf("Invalid option: Please enter only between 1-12 !!!");
        }
    } 

    return 0;

}