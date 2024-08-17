#include <stdio.h>

int main() {

    // int num = 123;
    // int ones = num % 10;
    // int tenth = num / 10 % 10;
    // int hunth = num / 100;

    // printf("%d\n", ones);
    // printf("%d\n", tenth);
    // printf("%d\n", hunth);
    // printf("%d%d%d", ones, tenth, hunth);

    // With scanf --> functoin

    int num;

    printf("Enter the number for palindrome: ");
    scanf("%d", &num);
    
    int ones = num % 10;
    int tenth = num / 10 % 10;
    int hunth = num / 100;
    int ans = ones * 100 + tenth * 10 + hunth * 1;

    printf("Answer is = %d%d%d\n", ones, tenth, hunth);
    printf("Answer is =%d", ans);
}