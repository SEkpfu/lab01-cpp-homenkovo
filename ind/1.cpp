#include <iostream>
#include <cmath>

int main() {
    double r1, r2;
    std::cout << "R1 = ";
    std::cin >> r1;
    std::cout << "R2 = ";
    std::cin >> r2;

    const double s1 = M_PI * r1 * r1,
                 s2 = M_PI * r2 * r2;
    
    std::cout << "S1 = " << s1 << std::endl
              << "S2 = " << s2 << std::endl
              << "S3 = " << s1 - s2 << std::endl;

    return 0;
}
