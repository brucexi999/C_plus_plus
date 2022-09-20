#include <iostream>
#include <string>

int main (void) {
    using std::string;
    using std::getline; 
    using std::cin;
    using std::cout;
    using std::endl;

    string line;
    while (getline(cin, line)) {
        cout << line << endl;
    }
    return 0;
}