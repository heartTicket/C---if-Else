#include <stdio.h>

int main() {

    int days;

    printf("Enter a weak day: ");
    scanf("%d", &days);

    switch (days) {
        case 1: case 2: case 3: case 4: case 5: {
            printf("Working day");
            break;
        }
        case 6: case 7: {
            printf("Free day");
            break;
        }
        default: {
            printf("Invalid option: Please enter only weak day !!!");
        }
    }

    return 0;

}