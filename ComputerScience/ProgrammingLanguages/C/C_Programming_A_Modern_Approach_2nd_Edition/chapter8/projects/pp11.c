#include <stdio.h>

#define N 15

int main(void)
{
    printf("Enter phone number: ");
    char ch, phone[N] = {0};
    int count = 0, i = 0;

    while ((ch = getchar()) != '\n') {
        phone[count++] = ch;
    }
    printf("In numeric form: ");

    while (i < count) {
        switch (phone[i]) {
            case 'A': case 'B': case 'C':
                putchar('2');
                break;
            case 'D': case 'E': case 'F':
                putchar('3');
                break;
            case 'G': case 'H': case 'I':
                putchar('4');
                break;
            case 'J': case 'K': case 'L':
                putchar('5');
                break;
            case 'M': case 'N': case 'O':
                putchar('6');
                break;
            case 'P': case 'R': case 'S':
                putchar('7');
                break;
            case 'T': case 'U': case 'V':
                putchar('8');
                break;
            case 'W': case 'X': case 'Y':
                putchar ('9');
                break;
            default:
                putchar(phone[i]);
                break;
        }
        i++;
    }
    putchar('\n');

    return 0;
}
