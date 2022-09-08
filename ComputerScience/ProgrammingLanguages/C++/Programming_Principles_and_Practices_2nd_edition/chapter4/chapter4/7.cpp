//simple calculator
#include <iostream>
#include <string>
#include <vector>

double calculate(double a, double b, char op);
void readOperationSingleDigits(int& a, int& b, char& op);
void displayResult(double result);
int wordToDigit(std::string word);

int main()
{
    int operand1{};
    int operand2{};
    char operation{};
    readOperationSingleDigits(operand1, operand2, operation);
    displayResult(calculate(operand1, operand2, operation));

    return 0;
}

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


void readOperationSingleDigits(int& a, int& b, char& op)
{
    std::cout << "Enter two numbers and an operator (+, -, *, /):\n";
    std::string num1{};
    std::string num2{};
    std::cin >> num1 >> num2 >> op;
    if (isdigit(num1[0]))
        if (num1.size() == 1)
            a = std::stoi(num1);
        else
            throw std::runtime_error("Invalid number");

    else
        a = wordToDigit(num1);
    
    if (isdigit(num2[0]))
        if (num2.size() == 1)
            b = std::stoi(num2);
        else
            throw std::runtime_error("Invalid number");

    else
        b = wordToDigit(num2);
}

void displayResult(double result)
{
    std::cout << "Result: " << result << '\n';
}

int wordToDigit(std::string word)
{
    std::vector<std::string> words{"zero", "one", "two",
                                   "three", "four", "five", "six",
                                   "seven", "eight", "nine"};
    
    for (long unsigned i{0}; i < words.size(); ++i)
        if (word == words[i])
            return i;

    throw std::runtime_error("Invalid word");
}