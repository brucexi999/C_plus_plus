#include <iostream>
int main (void) {
    int count=0, num;
    while (std::cin >> num) {
        if (num < 0) {
            ++count;
        }
    }
    printf("%d", count);
    return 0;
}