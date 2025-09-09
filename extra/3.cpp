#include <iostream>
#include <cmath>

#define START 1
#define STOP 2

const double epsilon = 1e-5;

double f(double x) {
    return std::cos(std::pow(x, 1.5));
}

int main() {

    double answer = 0;
    for (double i = START; i <= STOP; i += epsilon) {
        answer += i;
    }

    answer *= epsilon * (STOP - START);

    std::cout << "Answer: " << answer << std::endl;

    return 0;
}
