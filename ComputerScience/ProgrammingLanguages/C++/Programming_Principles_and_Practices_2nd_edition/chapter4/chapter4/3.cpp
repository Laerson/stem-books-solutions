//computes information about route distances between two cities
#include <iostream>
#include <vector>

int main()
{
    std::vector<double> distances{};
    for (double distance; std::cin >> distance;)
        distances.push_back(distance);

    // compute the total distance
    double sum{0};
    for (double distance : distances)
        sum += distance;
    
    std::cout << "Total distance: " << sum << '\n';

    // compute the smallest distance
    double smallest{distances[0]};
    for (double distance : distances)
        if (distance < smallest)
            smallest = distance;

    std::cout << "Smallest distance: " << smallest << '\n';

    // compute the largest distance
    double largest{distances[0]};
    for (double distance : distances)
        if (distance > largest)
            largest = distance;

    std::cout << "Largest distance: " << largest << '\n';

    // compute the mean distance
    std::cout << "Mean distance: " << sum / distances.size() << '\n';

    return 0;
}

