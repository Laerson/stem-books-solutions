#include <stdio.h>

#define N 20

int main(void)
{
    int i = 0;
    char initial, ch, name[N];
    printf("Enter a first and last name: ");

    scanf(" %c", &initial);

    while((ch = getchar()) != ' ')
        ;
    while((ch = getchar()) != '\n')
            if(ch != ' ')
                name[i++] = ch;

    printf("You entered the name: ");
    for (int j = 0; j < i; j++)
        printf("%c", name[j]);
    printf(", %c.\n", initial);

    return 0;
}
