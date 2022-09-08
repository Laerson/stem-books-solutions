#include <iostream>
#include <string>
#include <map>

int spelled_to_int(std::string spelled_number);

int main()
{
    std::cout << "Enter a spelled out number: ";
    std::string spelled_number{};
    std::cin >> spelled_number;
    int number{spelled_to_int(spelled_number)};
    
    if (number == -1)
        std::cout << "Not a number I know\n";
    else
        std::cout << number << '\n';

    return 0;
}

int spelled_to_int(std::string spelled_number)
{
    std::map<std::string, int> spelled_to_int_map {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
    };

    if (spelled_to_int_map.find(spelled_number) != spelled_to_int_map.end())
        return spelled_to_int_map[spelled_number];
    else
        return -1;
}