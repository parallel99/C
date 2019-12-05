#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

/*
 * Egy 1024x768-as kijelzőre pontok kirajzolása 
 */
class tegla {
    int a;
    int b;
    int ker(){ return 2 * (a + b); };
    int ter(){ return a * b; };
public:
   
    tegla() {
        cout << "Kérem az 'a' hosszát: ";
        cin >> this->a;
        cout << "Kérem az 'b' hosszát: ";
        cin >> this->b;
    }
    
    ~tegla() {
        cout << "A terület: " << ker() << endl;
        cout << "A kerület: " << ter() << endl;
    }
};


int main() {
    setlocale(LC_ALL, "");
    tegla ob;
    return 0;
}

