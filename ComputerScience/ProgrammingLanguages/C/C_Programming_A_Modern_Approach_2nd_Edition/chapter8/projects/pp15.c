#include <stdio.h>

#define N 80

int main(void)
{
    char message[80], ch;
    int message_size = 0;

    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n')
        message[message_size++] = ch;

    printf("Enter shift amount (1-25): ");
    int shift;
    scanf("%d", &shift);
    printf("Encrypted message: ");

    for (int i = 0; i < message_size; i++) {
        ch = message[i];
        if ('A' <= ch && ch <= 'Z')
            ch = ((ch - 'A') + shift) % 26 + 'A';
        else if ('a' <= ch && ch <= 'z')
            ch = ((ch - 'a') + shift) % 26 + 'a';
        putchar(ch);
    }
    putchar('\n');


    return 0;
}
