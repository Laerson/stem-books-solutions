#include <iostream>

int main()
{
    std::cout << "Enter two floating-point values: ";
    double val1{};
    double val2{};
    std::cin >> val1 >> val2;
    std::cout << "The smaller value is " << (val1 < val2 ? val1 : val2)
              << "\nthe larger value is " << (val1 > val2 ? val1 : val2)
              << "\nthe sum is " << val1 + val2 << '\n'
              << "the difference is " << val1 - val2 << '\n'
              << "the product is " << val1 * val2 << '\n'
              << "the ratio is " << val1 / val2 << '\n';

    return 0;
}