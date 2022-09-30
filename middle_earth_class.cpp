#include <iostream>
#include <string.h>

using namespace std; // I am only using the std lib, so this line brings no problem. 

class Elves {
    private:
        string kindred; 
    public: 
        int life_span = 999999999;
        int beauty = 10;
        int wisdom_skill = 10;
        string birth_place; 
        Elves (string abirth_place) {
            birth_place = abirth_place; 
        }

        bool isCalaquendi (void) {
            if (birth_place == "Valinor") {
                return true;
            } else {
                return false; 
            }
        }

        void set_kindred (string akindred){
            if (akindred == "Noldor" || akindred == "Vanyar" || akindred == "Teleri") {
                kindred = akindred;
            }
            else kindred = "Unknown";
        }

        string get_kindred (void){
            return kindred; 
        }
            

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

class Cities {
    public:
        string founder;
        int age; 
        Cities (string afounder, int aage) {
            founder = afounder; 
            age = aage; 
        }
};

int main (void) {
    Elves Luthien ("Valinor"), Arwen ("Middle-earth"); 
    Men Beren, Aragorn; 
    Dwarves Durin; 

    Cities Minas_Tirith ("Elendil", 2); 
    Cities Gondolin ("Turgon", 1);

    cout << Luthien.isCalaquendi() << endl;
    cout << Arwen.isCalaquendi() << endl; 
    cout << Beren.life_span << endl;

    cout << Gondolin.founder << endl;
    cout << Minas_Tirith.age << endl;

    Luthien.set_kindred("Teleri"); 
    Arwen.set_kindred("Mixed"); 

    cout << Luthien.get_kindred() << endl; 
    cout << Arwen.get_kindred() << endl; 
    return 0; 
}