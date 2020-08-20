#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item s;
    Sales_item sum;
    while (std::cin >> s) {
        sum += s;
    }
    std::cout << sum << std::endl;
}