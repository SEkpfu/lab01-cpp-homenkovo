#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x, y;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;

    std::cout << std::showpos << std::fixed << std::setprecision(5)
              << x * std::log(x) + y / (std::cos(x) - M_PI / 3) << std::endl
              << std::scientific
              << std::sin(std::sqrt(x + 1)) - std::sin(std::sqrt(x - 1)) << std::endl;

    return 0;
}
