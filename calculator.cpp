#include <iostream>
#include <cmath>
#include <string>


using namespace std; // I am only using the std lib, so this line brings no problem. 

int main (void) {
    string task; 
    char a, b, op;
    int num1, num2, result;  

    cout << "Enter your two-number integer arithmetic, no spaces." << endl; 
    cin >> task; 
    a = task[0]; 
    op = task[1]; 
    b = task[2]; 
    num1 = a-48; 
    num2 = b-48; 
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;
    
    case '/':
        result = num1 / num2;
        break;
    
    default:
        break;
    }

    cout << result << endl; 

    return 0;
}