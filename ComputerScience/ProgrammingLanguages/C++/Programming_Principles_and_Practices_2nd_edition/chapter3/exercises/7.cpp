#include <iostream>
#include <vector>
#include <string>

void print_in_order(std::string val1, std::string val2, std::string val3);

int main()
{
    std::cout << "Enter three string values: ";
    std::string val1{};
    std::string val2{};
    std::string val3{};
    std::cin >> val1 >> val2 >> val3;
    print_in_order(val1, val2, val3);

    return 0;
}

void print_in_order(std::string val1, std::string val2, std::string val3)
{
    std::vector<std::string> values{val1, val2, val3};
    std::sort(values.begin(), values.end());
    
    std::cout << values[0] << ", " << values[1] << ", " << values[2] << '\n';
}