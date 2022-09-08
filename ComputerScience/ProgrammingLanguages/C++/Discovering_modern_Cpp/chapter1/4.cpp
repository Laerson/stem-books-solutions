#include <iostream>

int middle(int a, int b, int c)
{
    return a < b ? (b < c ? b : (a < c ? c : a)) : (a < c ? a : (b < c ? c : b));
}

int main()
{
    double n1{};
    std::cin >> n1;

    double n2{};
    std::cin >> n2;

    double n3{};
    std::cin >> n3;

    std::cout << middle(n1, n2, n3) << '\n';

    return 0;
}