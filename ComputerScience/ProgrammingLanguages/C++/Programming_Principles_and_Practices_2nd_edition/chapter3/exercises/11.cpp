#include <iostream>

int main()
{
    std::cout << "How many pennies do you have?\n";
    int pennies{};
    std::cin >> pennies;

    std::cout << "How many nickels do you have?\n";
    int nickels{};
    std::cin >> nickels;

    std::cout << "How many dimes do you have?\n";
    int dimes{};
    std::cin >> dimes;

    std::cout << "How many quarters do you have?\n";
    int quarters{};
    std::cin >> quarters;

    std::cout << "How many half dollars do you have?\n";
    int half_dollars{};
    std::cin >> half_dollars;

    std::cout << "How many one dollar coins do you have?\n";
    int one_dollar_coins{};
    std::cin >> one_dollar_coins;

    if (pennies < 0 || nickels < 0 || dimes < 0 || quarters < 0 || half_dollars < 0 || one_dollar_coins < 0)
        throw std::runtime_error("You can't have negative coins");

    if (pennies == 1)
        std::cout << "You have " << pennies << " penny.\n";
    else if (pennies > 1)
        std::cout << "You have " << pennies << " pennies.\n";

    if (nickels == 1)
        std::cout << "You have " << nickels << " nickel.\n";
    else if (nickels > 1)
        std::cout << "You have " << nickels << " nickels.\n";

    if (dimes == 1)
        std::cout << "You have " << dimes << " dime.\n";
    else if (dimes > 1)
        std::cout << "You have " << dimes << " dimes.\n";

    if (quarters == 1)
        std::cout << "You have " << quarters << " quarter.\n";
    else if (quarters > 1)
        std::cout << "You have " << quarters << " quarters.\n";

    if (half_dollars == 1)
        std::cout << "You have " << half_dollars << " half dollar.\n";
    else if (half_dollars > 1)
        std::cout << "You have " << half_dollars << " half dollars.\n";

    if (one_dollar_coins == 1)
        std::cout << "You have " << one_dollar_coins << " one dollar coin.\n";
    else if (one_dollar_coins > 1)
        std::cout << "You have " << one_dollar_coins << " one dollar coins.\n";

    int total{pennies + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50 + one_dollar_coins * 100};
    
    std::cout << "The value of all your coins is $"
              << total / 100 << "." << total % 100 << '\n';

    return 0;
}