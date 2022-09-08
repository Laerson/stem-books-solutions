#include <iostream>
#include <vector>

void print_in_order(int val1, int val2, int val3);

int main()
{
    std::cout << "Enter three integer values: ";
    int val1{};
    int val2{};
    int val3{};
    std::cin >> val1 >> val2 >> val3;
    print_in_order(val1, val2, val3);

    return 0;
}

void print_in_order(int val1, int val2, int val3)
{
    std::vector<int> values{val1, val2, val3};
    std::sort(values.begin(), values.end());
    
    std::cout << values[0] << ", " << values[1] << ", " << values[2] << '\n';
}