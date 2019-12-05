#include <cstdlib>
#include <clocale>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Osztaly {
    char szoveg[80];
protected:
    char c;
public:

    void beolvas() {
        cout << "Kérem egy szöveget: " << endl;
        cin >> szoveg;
        cout << "Kérek egy karaktert: " << endl;
        cin >> c;
    }

    int vizsgal() {
        char *sz;
        sz = szoveg;
        int index = 1;
        while (*sz) {
            if (*sz == c) {
                return index;
            }
            sz++;
            index++;
        }
        return -1;
    }
};

class Karakter : Osztaly {
public:
    Karakter(char c) {
        this->c = c;
    }
};

int main() {
    setlocale(LC_ALL, "");
    int vizsgal;
    Osztaly k;
    k.beolvas();

    vizsgal = k.vizsgal();

    if (vizsgal == -1) {
        cout << "Nemtalálható";
    } else {
        cout << "A " << vizsgal << ". helyen található a karakter";
    }

    return 0;
}

