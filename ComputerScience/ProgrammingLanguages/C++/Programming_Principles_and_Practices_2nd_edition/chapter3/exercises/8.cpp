#include <iostream>

int main()
{
    std::cout << "Enter an integer value: ";
    int val1{};
    std::cin >> val1;
    std::cout << "The value " << val1 << " is an "
              << (val1 % 2 == 0 ? "even" : "odd") << " number\n";

    return 0;
}