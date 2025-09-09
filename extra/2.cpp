#include <iostream>

int main() {
    int n;
    std::cout << "Number: ";
    std::cin >> n;

    std::cout << "В драке сломали " << n << " стол" << (n % 100 / 10 == 1 || n % 10 > 4 || n % 10 == 0 ? "ов" : n % 10 == 1 ? "" : "а") << std::endl;

    return 0;
}
