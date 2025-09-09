#include <iostream>
#include <cassert>

int main() {
    int n;
    std::cout << "Number: ";
    std::cin >> n;
    n = std::abs(n);
    assert(100 <= n && n < 1000);

    const int answer = n / 10 % 10 * 100 + n / 100 * 10 + n % 10;
    std::cout << answer << std::endl;

    return 0;
}
