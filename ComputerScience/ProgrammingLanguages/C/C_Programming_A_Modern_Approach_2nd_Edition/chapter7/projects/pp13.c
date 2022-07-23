#include <stdio.h>
#include <stdbool.h>

int main(void)
{   
    int word_count = 0, char_count = 0;
    bool in_word = false;
    
    printf("Enter a sentence: ");
    char ch;

    while((ch = getchar()) != '\n') {
        if (ch != ' ') {
            char_count++;
            if (!in_word) {
                word_count++;
                in_word = true;
            }
        }
        else if(in_word)
            in_word = false;
    }

    printf("Average word length: %.1f\n", (double) char_count / word_count);

    return 0;
}
