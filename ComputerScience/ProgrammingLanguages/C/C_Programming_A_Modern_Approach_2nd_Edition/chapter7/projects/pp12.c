#include <stdio.h>

int main(void)
{
    printf("Enter an expression: ");
    double result;
    scanf("%lf", &result);

    double num;
    char op;
    while((op = getchar()) != '\n') {
        scanf("%lf", &num);
        switch (op) {
            case '+': result += num; break;
            case '-': result -= num; break;
            case '*': result *= num; break;
            case '/': result /= num; break;
        }
    }
    printf("Value of expression: %f\n", result);

    return 0;
}
