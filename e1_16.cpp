#include <iostream>
int main (void) {
    int a, b; 
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> a >> b;
    if (a > b) {
        printf ("%d\n", a);
    } else if (a==b) {
        printf("a is equal to b.\n");
    } else printf ("%d\n", b);

    return 0;
}