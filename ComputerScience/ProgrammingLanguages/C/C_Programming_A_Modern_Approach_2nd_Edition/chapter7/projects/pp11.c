#include <stdio.h>

int main(void)
{
    char initial, ch;
    printf("Enter a first and last name: ");

    scanf(" %c", &initial);

    while((ch = getchar()) != ' ')
        ;
    while((ch = getchar()) != '\n')
            if(ch != ' ')
                putchar(ch);
    
    printf(", %c.\n", initial);

    return 0;
}
