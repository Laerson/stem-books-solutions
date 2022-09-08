// converts a digit to its corresponding word
#include <iostream>
#include <string>
#include <vector>

std::string digitToWord(int digit)
{
    if (digit < 0 || digit > 9)
        throw std::runtime_error("Invalid digit");

    std::vector<std::string> words{"zero", "one", "two",
                                   "three", "four", "five", "six",
                                   "seven", "eight", "nine"};
    return words[static_cast<long unsigned> (digit)];
}

int wordToDigit(std::string word)
{
    std::vector<std::string> words{"zero", "one", "two",
                                   "three", "four", "five", "six",
                                   "seven", "eight", "nine"};
    
    for (long unsigned i{0}; i < words.size(); ++i)
        if (word == words[i])
            return i;

    throw std::runtime_error("Invalid word");
}

int main()
{
    std::cout << "Enter a digit or a word representing a digit:\n";
    std::string input{};
    std::cin >> input;

    if (isdigit(input[0]))
        std::cout << digitToWord(std::stoi(input)) << '\n';
    else
        std::cout << wordToDigit(input) << '\n';

    return 0;
}