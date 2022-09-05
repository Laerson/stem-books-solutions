#include <iostream>
#include <cmath>
#include <iomanip>

double f(double x)
{
    return std::sin(5.0 * x) + std::cos(x);
}

int main()
{
    double left{0.0};
    double right{1.0};
    double middle{};

    while (right - left >= 1e-12)
    {
        middle = (left + right) / 2.0;
        std::signbit(f(left)) == std::signbit(f(middle))
            ? left = middle
            : right = middle;
    }

    std::cout << "The zero is at " << std::setprecision(12) << middle << '\n';

    return 0;
}