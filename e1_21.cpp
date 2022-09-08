#include <iostream>
#include "Sales_item.h"

int main (void) {
    Sales_item book; 
    printf("Enter the transactions, use \"control + d\" to exit.\n");
    while (std::cin >> book) {
        std::cout << book << std::endl; 
    }

    return 0;
}