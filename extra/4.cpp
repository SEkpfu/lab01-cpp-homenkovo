#include <iostream>
#include <cstdint>
#include <cmath>

double arcsch_approx(double x, double epsilon = 1e-5) {
    double a = 1, b = x, to_return = 0, d = 1.0 / x, tmp = 1;

    const double sqr_x = x * x;

    do {
        to_return += d;
        a *= -tmp;
        b *= sqr_x * (tmp + 1);
        tmp += 2;
    } while (std::abs(d = a / (b * tmp)) >= epsilon);

    return to_return;
}

double arcsch_math(double x) {
    return std::log(1.0 / x + std::sqrt(1 + 1.0 / (x * x)));
}

int main() {
    double start, end, step, epsilon;
    std::cout << "Start: ";
    std::cin >> start;
    std::cout << "End: ";
    std::cin >> end;
    std::cout << "Step: ";
    std::cin >> step;
    std::cout << "Epsilon: ";
    std::cin >> epsilon;

    std::cout << "x\tApprox\tMath\tDifference" << std::endl;
    for (double i = start; i < end; i += step) {
        if (std::abs(i) <= 1) {
            continue;
        }

        const double approx = arcsch_approx(i, epsilon), math = arcsch_math(i);
        std::cout << i << '\t' << approx << '\t' << math << '\t' << approx - math << std::endl;
    }

    return 0;
}
