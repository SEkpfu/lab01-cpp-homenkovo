#include <iostream>
#include <sstream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    const double summary = a + b + c;
    std::stringstream s;
    s << "MA = " << summary / 3 << std::endl
      << "MG = " << std::pow(a * b * c, 1.0 / 3);

    std::cout << (summary < 30 ? s.str() : std::to_string(std::min(a, c))) << std::endl;

    return 0;
}
