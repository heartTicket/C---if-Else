#include <stdio.h>
 
int main() {

    int score;

    printf("Please enter your score: ");
    scanf("%d", &score);

    switch (score) {
        case 1:
            printf("bad");
            break;

        case 2:
            printf("unsatisfactory");
            break;

        case 3:
            printf("satisfactory");
            break;

        case 4:
            printf("good");
            break;

        case 5:
            printf("excellent");
            break;

        default:
            printf("Invalid option: Please enter only between 1-5 !!!");
    }

    return 0;
    
}