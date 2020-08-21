#include <iostream>
#include "Sales_item.h"


int main(){
    Sales_item item, cur_item;
    if (std::cin >> cur_item) {
        int count = 1;
        while (std::cin >> item) {
            if (cur_item == item) {
                count++;
            } else {
                std::cout << cur_item << " count:" << count << std::endl;
                cur_item = item;
                count = 1;
            }
        }
    }
    return 0;
}
