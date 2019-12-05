#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class tomb {
protected:
    int t[15];
public:
    void be() {
        for (int i = 0; i < 15; i++) {
            cout << "Kérem a " << i + 1 << " számot: ";
            cin >> t[i];
        }
    }
};

class atlag: public tomb {
private:
    int ossz = 0;
    int db = 0;
    
    float avg() {
        this->ossz = ossz;
        this->db = db;
        for (int i = 0; i < 15; i++) {
            ossz += t[i];
            db++;
        }
        
        return ossz/db;
    }
    
public:
    void ki(){
        cout << "Az átlag: " << avg();
    }
};

int main() {
    atlag ob;
    ob.be();
    ob.ki();
    return 0;
}

