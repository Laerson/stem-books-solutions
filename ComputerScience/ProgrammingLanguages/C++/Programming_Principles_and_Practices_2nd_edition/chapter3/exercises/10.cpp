#include <iostream>
#include <string>

double operation(double a, double b, std::string op);

int main()
{
    double a{};
    double b{};
    std::string op{};

    std::cout << "Enter the operation followed by two operands\n";
    std::cin >> op >> a >> b;
    std::cout << operation(a, b, op) << '\n';

    return 0;
}

double operation(double a, double b, std::string op)
{
    if (op == "+" || op == "plus")
        return a + b;
    else if (op == "-" || op == "minus")
        return a - b;
    else if (op == "*" || op == "mul")
        return a * b;
    else if (op == "/" || op == "div")
        return a / b;
    else
        throw std::runtime_error("Unknown operation");
}