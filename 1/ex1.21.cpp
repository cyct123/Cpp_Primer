#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item s1, s2;
    std::cin >> s1;
    std::cin >> s2;
    Sales_item sum = s1 + s2;
    std::cout << sum << std::endl;
    return 0;
}