#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);

bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int ocurrence_a[26] = {0}, ocurrence_b[26] = {0};
    printf("Enter first word: ");
    read_word(ocurrence_a);
    printf("Enter second word: ");
    read_word(ocurrence_b);

    printf("The words are ");

        if (!equal_array(ocurrence_a, ocurrence_b))
            printf("not ");

    printf("anagrams.\n");

    return 0;
}

void read_word(int ocurrence[26])
{
    char ch;

    while ((ch = getchar()) != '\n')
        if (isalpha(ch))
            ocurrence[tolower(ch) - 'a']++;
}

bool equal_array(int counts1[26], int counts2[26])
{
    for(int i = 0; i < 26; i++)
        if (counts1[i] != counts2[i])
            return false;
    return true;
}
