#include <fstream>

double cube(double x)
{
    return x * x * x;
}

void readValue(double& x)
{
    std::ifstream in{"input.txt"};
    in >> x;
}

void writeValue(double x)
{
    std::ofstream out{"output.txt"};
    out << x;
}

int main()
{
    double x{};
    readValue(x);
    writeValue(cube(x));
    
    return 0;
}