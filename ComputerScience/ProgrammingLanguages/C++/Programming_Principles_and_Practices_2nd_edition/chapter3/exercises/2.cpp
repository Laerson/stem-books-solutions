// convert miles to kilometers
#include <iostream>

int main()
{
    std::cout << "Enter the number of miles: ";
    double miles{};
    std::cin >> miles;
    std::cout << miles << " miles is " << miles * 1.609
              << " kilometers" << '\n';

    return 0;
}