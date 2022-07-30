#include <stdio.h>
#include <ctype.h>

int main(void)
{   
    char ch;
    int points = 0, value[26];

    printf("Enter a word: ");


    for (int i = 0; i < 26; i++) {
        switch (i + 'A') {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                value[i] = 1;
                break;
            case 'D':
            case 'G':
                value[i]= 2;
                break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                value[i]= 3;
                break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                value[i]= 4;
                break;
            case 'K':
                value[i]= 5;
                break;
            case 'J':
            case 'X':
                value[i]= 8;
                break;
            case 'Q':
            case 'Z':
                value[i]= 10;
                break;
        }
    }

    while((ch = getchar()) != '\n')
        points += value[toupper(ch) - 'A'];

    printf("Scrabble value: %d\n", points);

    return 0;
}
