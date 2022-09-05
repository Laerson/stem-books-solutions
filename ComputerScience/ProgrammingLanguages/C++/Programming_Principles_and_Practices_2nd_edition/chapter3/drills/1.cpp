#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter the name of the person you want to write to\n";
    std::string first_name{};
    std::cin >> first_name;
    std::cout << "Dear " << first_name << ",\n";
    std::cout << "How are you? I am fine. I miss you.\n";
    std::cout << "Enter the name of another friend\n";
    std::string friend_name{};
    std::cin >> friend_name;
    std::cout << "Have you seen " << friend_name << " lately?\n";

    std::cout << "Enter m if the friend is male, "
              << "and f if the friend is female.\n";
    char friend_sex{0};
    std::cin >> friend_sex;

    if (friend_sex == 'm')
        std::cout << "If you see " << friend_name
                  << " please ask him to call me.\n";
    else if (friend_sex == 'f')
        std::cout << "If you see " << friend_name
                  << " please ask her to call me\n";

    std::cout << "Enter the age of the recipient\n";
    int age{};
    std::cin >> age;

    if (age <= 0 || age >= 110) {
        std::cerr << "error: you're kidding!\n";
        exit(1);
    }
    std::cout << "I hear you just had a birthday and you are " << age
              << " years old.\n";

    if (age < 12)
        std::cout << "Next year you will be " << age + 1 << ".\n";
    else if (age == 17)
        std::cout << "Next year you will be able to vote.\n";
    else if (age > 70)
        std::cout << "I hope you are enjoying retirement.\n";

    std::cout << "Yours sincerely,\n\n\n"
              << "Laerson\n";

    return 0;
}