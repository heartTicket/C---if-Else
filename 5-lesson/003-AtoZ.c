#include <stdio.h> 

int main() {

    char symbol = 65, over = 90;    // int char it doesn't matter

    while (symbol <= over) {    // or we can write there 65 and over = 90 it also doesn't matter
        printf("%c ", symbol);
        symbol += 1;
    }
    return 0;
}