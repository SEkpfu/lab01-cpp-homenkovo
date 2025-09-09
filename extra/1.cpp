#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cout << "n = ";
    std::cin >> n;

    for (int i = n; i > 0; --i) {
        for (int j = n; j > i; --j) {
            std::cout << '-';
        } for (int j = i; j > 0; --j) {
            std::cout << j;
        } std::cout << std::endl;
    }

    return 0;
}
