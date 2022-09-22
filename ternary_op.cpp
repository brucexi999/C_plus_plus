#include <iostream>

int main (void) {
    int a, b, bigger;
    using std::cin;
    using std::cout;
    using std::endl;

    cin >> a >> b; 
    bigger = (a>=b)? a : b; 
    cout << bigger << endl;  
    return 0;
}