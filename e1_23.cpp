#include <iostream>
#include "Sales_item.h"

int main (void) {
    Sales_item book, sum; 
    int i = 0;
    printf("Enter the transactions, use \"control + d\" to exit.\n");
    while (std::cin >> book) {
        if (i == 0) {
            sum = book; 
        } else {
            sum = sum + book; 
        }
        ++i; 
    }
    std::cout << sum << std::endl; 

    return 0;
}