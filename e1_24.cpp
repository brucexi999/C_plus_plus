#include <iostream>
#include "Sales_item.h"

int main (void) {
    Sales_item sum, trans;
    while (std::cin >> trans) {
        if (sum.same_isbn(trans)) {
            sum = sum + trans;
        } else {
            std::cout << sum << std::endl; 
            sum = trans; 
        }
    }
    std::cout << sum << std::endl;

    return 0;
}