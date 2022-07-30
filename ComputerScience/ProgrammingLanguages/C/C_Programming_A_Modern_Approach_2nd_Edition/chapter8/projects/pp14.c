#include <stdio.h>

#define N 100

int main(void)
{
    char sentence[N];
    int i, j, k;

    printf("Enter a sentence: ");

    for (i = 0; i < N; i++) {
        sentence[i] = getchar();
        if (sentence[i] == '.' || sentence[i] == '?' || sentence[i] == '!')
            break;
    }

    char endpoint = sentence[i];

    printf("Reversal of sentence:");
    for (j = i - 1; j >= -1; j--) {
        if (j == -1 || sentence[j] == ' ') {
            putchar(' ');
            for (k = j + 1; k < i; k++)
                putchar(sentence[k]);
            i = j;
        }
    }
    putchar(endpoint);
    putchar('\n');

    return 0;
}
