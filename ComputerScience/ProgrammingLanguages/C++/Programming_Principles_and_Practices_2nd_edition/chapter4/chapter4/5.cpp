//simple calculator
#include <iostream>

double calculate(double a, double b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        throw std::runtime_error("Invalid operator");
    }
}

void readOperation(double& a, double& b, char& op)
{
    std::cout << "Enter two numbers and an operator (+, -, *, /):\n";
    std::cin >> a >> b >> op;
}

void displayResult(double result)
{
    std::cout << "Result: " << result << '\n';
}

int main()
{
    double operand1{};
    double operand2{};
    char operation{};
    readOperation(operand1, operand2, operation);
    displayResult(calculate(operand1, operand2, operation));

    return 0;
}