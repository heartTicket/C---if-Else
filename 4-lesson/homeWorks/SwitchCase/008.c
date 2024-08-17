#include <stdio.h>

int main() {

    char symbol;

    printf("Enter a character: ");
    scanf("%c", &symbol);

    switch (symbol) {
        case 'a': printf("vowel letter"); break;
        case 'e': printf("vowel letter"); break;
        case 'i': printf("vowel letter"); break;
        case 'o': printf("vowel letter"); break;
        case 'u': printf("vowel letter"); break;
        case 'b': printf("consonant letter"); break;
        case 'c': printf("consonant letter"); break;
        case 'd': printf("consonant letter"); break;
        case 'f': printf("consonant letter"); break;
        case 'g': printf("consonant letter"); break;
        case 'k': printf("consonant letter"); break;
        case 'l': printf("consonant letter"); break;
        case 'm': printf("consonant letter"); break;
        case 'n': printf("consonant letter"); break;
        case 'p': printf("consonant letter"); break;
        case 'q': printf("consonant letter"); break;
        case 's': printf("consonant letter"); break;
        case 't': printf("consonant letter"); break;
        case 'v': printf("consonant letter"); break;
        case 'x': printf("consonant letter"); break;
        case 'z': printf("consonant letter"); break;
        case 'h': printf("consonant letter"); break;
        case 'r': printf("consonant letter"); break;
        case 'w': printf("consonant letter"); break;
        case 'y': printf("consonant letter"); break;
        default: printf("Invalid option: Enter only alphabet character !!!");
    }

    return 0;

}