#include <stdio.h>

int main() {

    int day;
    printf("Enter the day between 1-7: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sudnay");
        break;
    
        default:
        printf("Invalid option: Please enter only between 1-7 !!!");
    }

    return 0;
}