#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;
/*
 
 * Egyszerű karakter beolcvasás és kiírás
 
 */
class Szoveg {
    //itt létrehoztuk az osztályt
    char szoveg[80];// létrehoztunk egy változót
    //ami itt van az privát nem érjük el a main-ből, se másik osztályból
public:
    //ami  itt van azt elérjük mindenhonnan mivel nyilvános (ezért is tudjuk meghívni a metódusokat a main-ből)
    void beolvas() {
        printf("Kérek egy szöveget: ");
        scanf("%[^\n]", szoveg);
    }

    void kiir() {
        cout << szoveg << endl;
    }
};

int main() {
    Szoveg obj; // itt meghívjuk az osztályt és obj névvel hivatkozunk rá
    obj.beolvas(); // itt meghívjuk az osztályból a beolvasás metódust
    obj.kiir();
    return 0;
}

