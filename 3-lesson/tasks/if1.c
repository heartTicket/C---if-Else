#include <stdio.h>

int main() {

    int num; 

    printf("Enter you number: ");
    scanf("%d", &num);

    if (num > 0) {
        num += 1;
        printf("Your number is %d please take it !!!", num);
    } else {
        printf("%d", num);
    }
return 0;
}