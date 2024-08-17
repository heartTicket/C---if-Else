#include <stdio.h> 

int main() {

    // Babies -> 0-2
    // Children -> 3 - 16
    // Young Adults -> 17 - 30
    // Middle-aged Adults -> 31 -45
    // Old Adults -> bigger than 45

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 2) {
        puts("Hi you r a baby !!!");
    } else if (age >= 3 && age <= 16) {
        puts("You r children !!!");
    } else if (age >= 17 && age <= 30) {
        puts("you r an Young Adult");
    } else if (age >= 31 && age <= 45) {
        puts("you r MIddle-Aged Fam !!!");
    } else if (age > 45) {
        puts("You are an Old Adult !!!");
    } else {
        puts("Get a find out from here !!!");
    }
return 0;
}