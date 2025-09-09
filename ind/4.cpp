#include <iostream>

#define SQR(n) ((n) * (n))

int main() {
    double x;
    std::cout << "x = ";
    std::cin >> x;

    double tmp[3];
    tmp[0] = SQR(x);      // x^2
    tmp[1] = SQR(tmp[0]); // x^4
    tmp[2] = SQR(tmp[1]); // x^16

    std::cout << "y = " << tmp[2] - tmp[1] + tmp[0] - 2;

    return 0;
}
