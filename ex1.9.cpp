#include <iostream>


int main() {
    int i = 49;
    int sum = 0;
    while (i++ != 100) {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}
