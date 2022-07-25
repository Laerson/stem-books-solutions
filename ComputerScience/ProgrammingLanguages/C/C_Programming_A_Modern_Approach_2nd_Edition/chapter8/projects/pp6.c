#include <stdio.h>
#include <ctype.h>

#define N 100

int main(void)
{
    int count = 0;
    char message[N], ch;
    printf("Enter message: ");
    while((ch = toupper(getchar())) != '\n' && count < N)
        message[count++] = ch;

    printf("In B1FF-speak: ");
    for (int i = 0; i < count; i++)
        switch(ch = message[i]) {
            case 'A': putchar('4'); break;
            case 'B': putchar('8'); break;
            case 'E': putchar('3'); break;
            case 'I': putchar('1'); break;
            case 'O': putchar('0'); break;
            case 'S': putchar('5'); break;
            default:  putchar(ch); break;
        }
    printf("!!!!!!!!!!\n");




    return 0;
}
