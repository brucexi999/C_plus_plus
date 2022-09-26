#include <iostream>

using namespace std; // I am only using the std lib, so this line brings no problem. 

class Elfs {
    public: 
        int life_span = 999999999;
        int beauty = 10;
        int wisdom_skill = 10;
}; 

class Men {
    public: 
        int life_span = 80;
        int beauty = 6;
        int wisdom_skill = 6;
}; 

class Dwarves {
    public: 
        int life_span = 120;
        int beauty = 3;
        int wisdom_skill = 9;
}; 

class Orcs {
    public:
        int life_span = 10;
        int beauty = 0;
        int wisdom_skill = 1; 
}; 

int main (void) {
    Elfs Luthien, Arwen; 
    Men Beren, Aragorn; 
    Dwarves Durin; 

    cout << Luthien.beauty << endl; 
    cout << Beren.life_span << endl;
    return 0; 
}