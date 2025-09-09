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
              << std::pow(1 + 1.0 / (x * x), x) - 12 * x * x * y << std::endl
              << std::scientific
              << std::pow(std::cos(x), 4) + std::pow(std::sin(y), 2) + std::pow(std::sin(2 * x), 2) / 4 - 1 << std::endl;

    return 0;
}
