//Some notes about this project:
//The description given by the book, is vague about how to choose the
//amount of numbers. There are 3 approaches:
//1- Use a fixed number (the one i went for in this program)
//2- Read the amount from the user.
//3- Read a the numbers in a line, and stop reading when the user types '\n'
//
//The approach #3 seems more correct, however, at this point of the book,
//the student has not seem the functions that would allow him to do that,
//and trying to parse the string would make this too convoluted (if only 
//the author introduced at least the atoi function, or ungetc).
//
//approach #2 and #1 are both easy to implement at this point, however the question says nothing about asking the user to type the amount of numbers, that's why I choose to go for the fixed amount approach.
//
//
#include <stdio.h>

#define N 10

void selection_sort(int a[], int n);

int main(void)
{
    printf("Enter a series of %d integers: ", N);
    int numbers[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &numbers[i]);

    selection_sort(numbers, N);
    printf("The numbers you typed, sorted: ");
    for (int i = 0; i < N; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n)
{
    if (n > 1) {
        int max_index = 0;
        for (int i = 1; i < n; i++)
            if (a[max_index] < a[i])
                max_index = i;

        int tmp = a[n - 1];
        a[n - 1] = a[max_index];
        a[max_index] = tmp;

        selection_sort (a, n - 1);
    }
}
