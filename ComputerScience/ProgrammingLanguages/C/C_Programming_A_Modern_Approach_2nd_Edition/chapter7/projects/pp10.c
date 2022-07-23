#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int count = 0;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n') {
        c = toupper(c);
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            count++;
    }

    printf("Your sentence contains %d vowels.\n", count);

    return 0;
}
