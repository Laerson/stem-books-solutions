#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

char stack_underflow(void)
{
    return '*';
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void)
{
    if (is_empty())
       return stack_underflow();
    else
        return contents[--top];
}

int main(void)
{
    char ch;
    printf("Enter parentheses and/or braces: ");
    bool properly = true;

    while ((ch = getchar()) != '\n') {
        if (ch == '(' || ch == '{')
            push(ch);
        else if ((ch == ')' && '(' != pop()) || (ch == '}' && '{' != pop()))
            properly = false;
    }

    if (!is_empty())
        properly = false;

    if (properly)
        printf("Parentheses/braces are nested properly\n");
    else printf("Parentheses/braces aren't nested properly\n");
}
