#include <iostream>
#include "Sales_item.h"

int main (void) {
    Sales_item book1, book2; 
    printf("Enter 2 transactions, use \"control + d\" to exit.\n");
    std::cin >> book1 >> book2; 
    std::cout << book1 + book2 << std::endl;
    return 0;
}