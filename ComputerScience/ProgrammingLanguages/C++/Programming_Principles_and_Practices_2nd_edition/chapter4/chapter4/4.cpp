// Number guessing game
#include <iostream>

int main()
{
    int max_guess{100};
    int min_guess{1};
    int next_guess{50};

    std::cout << "Think of a number between 1 and 100 (inclusive) and I will try to guess it.\n";

    char response{};
    while (min_guess < max_guess) {
        std::cout << "Is your number less than " << next_guess + 1
                  << "? (y/n)\n";
        std::cin >> response;
        switch (response) {
            case 'y':
                max_guess = next_guess;
                break;
            case 'n':
                min_guess = next_guess + 1;
                break;
            default:
                throw std::runtime_error("Invalid response");
        }
        next_guess = (max_guess + min_guess) / 2;
    }

    std::cout << "Your number is " << next_guess << '\n';
}