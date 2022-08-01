#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void stack_overflow(void)
{
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
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

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
       stack_underflow();
    else
        return contents[--top];
}

int evaluate_rpn(char expression[], int n)
{
    int operand1, operand2;
    for (int i = 0; i < n; i++) {
        if ('0' <= expression[i] && expression[i] <= '9')
            push(expression[i] - '0');
        else if (expression[i] == '=')
            return pop();
        else {
            operand2 = pop();
            operand1 = pop();
            switch (expression[i]) {
                case '+': push(operand1 + operand2); break;
                case '-': push(operand1 - operand2); break;
                case '*': push(operand1 * operand2); break;
                case '/': push(operand1 / operand2); break;
            }
        }
        
    }
}

int main(void)
{
    char ch, expression[STACK_SIZE],
    valid_symbols[] = {'*', '/', '+', '*'};
    int n = 0;

    for(;;) {
        printf("Enter a RPN expression: ");
        for (;;) {
            scanf(" %c", &ch);
            if ('0' <= ch && ch <= '9')
                expression[n++] = ch;
            else if (ch == '=') {
                expression[n++] = ch;
                printf("Value of expression: %d\n", 
                        evaluate_rpn(expression, n));
                break;
            }
            else
                for (int i = 0; i <= 4; i++) {
                    if (i == 4)
                        return 0;
                    if (ch == valid_symbols[i]) {
                        expression[n++] = ch;
                        break;
                    }
                }
        }
    }

    return 0;
}
