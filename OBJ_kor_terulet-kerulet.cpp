#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

/*
 * Egy 1024x768-as kijelzőre pontok kirajzolása 
 */
class kor {
    float r;
    float ker(){ return 2 * r * M_PI; };
    float ter(){ return r * r * M_PI; };
public:
   
    kor() {
        cout << "Kérem a sugár hosszát: ";
        cin >> this->r;
    }
    
    ~kor() {
        cout << "A terület: " << ker() << endl;
        cout << "A kerület: " << ter() << endl;
    }
};


int main() {
    setlocale(LC_ALL, "");
    kor ob;
    return 0;
}
