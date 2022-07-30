#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ocurrence[26] = {0};
    char ch;
    printf("Enter first word: ");

    while ((ch = getchar()) != '\n')
        if (isalpha(ch))
            ocurrence[tolower(ch) - 'a']++;

    printf("Enter second word: ");
    
    while((ch = getchar()) != '\n')
        if (isalpha(ch))
            ocurrence[tolower(ch) - 'a']--;

    printf("The words are ");

    for (int i = 0; i < 26; i++)
        if (ocurrence[i] != 0) {
            printf("not ");
            break;
        }
    printf("anagrams.\n");

    return 0;
}
