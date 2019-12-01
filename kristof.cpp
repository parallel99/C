#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * A feladatsor 2. feladat 
 * Úgy megírva, hogy minden legyen benne ami tanultunk az objektumokról
 */

class Szoveg { //itt létrehoztuk az osztályt
protected: // Ez az jelenti, hogy ami ezután következik azt csak az osztályban és a leszármazott osztálykban lehet használni
    char szoveg[80]; // létrehoztunk egy tömböt

    void beolvas(){
        //egy egyzserű beolvasás egy metódusban
        printf("Kérek egy szöveget: ");
        scanf("%[^\n]", szoveg);
    }

    void kiir() {
        cout << szoveg << endl;
    }
};

class Szamok : Szoveg {
    /*
     * 
     * Az osztály neve az hogy számok és leszármazotja a Szoveg osztálynak
     * Ezért a public vagy protected-ben lévő dolgokat megörökli
     * Másnéven itt is meglehet hívni az osztályokat, vagy elérhetjük a benne lévő változókat
     * 
     */
private:    
    int db = 0;
    // Egy privát változó, másnéven ezt csak az osztályon belűl használhatjuk
public:

    Szamok() {
        /*
         * 
         * Ez egy Constructor
         * Mindig az osztály neve, így tudjuk hogy ez a Constructor
         * Igzából egy olyan metódus, ami akkor is lefut ha nem hívjuk meg, vagyis elég csak az osztályt meghívni
         * Mindig az osztályból ez fut le először
         * 
         */
        beolvas();// itt meghívjuk a beolvasás metódust, erre azért van lehetőségünk mert ez egy leszármazott osztály
        kiir();
        char *sz;
        sz = szoveg;
        while (*sz) {
            if (*sz >= '0' && *sz <= '9') {
                db++;
            }
            sz++;
        }
    }
    
    ~Szamok(){
         /*
         * 
         * Ez egy Destructor
         * Mindig az osztály neve és előttee van ez a jel: '~', így tudjuk hogy ez a Destructor
         * Mindig az osztályból ez fut le utoljára
         * Minden más tulajdonságában megegyezik a konstruktorral
         * 
         */
        cout << "Ennyi db szám van a string-ben: " << db;
    }
};

int main() { 
    Szamok sz;// itt meghívjuk az osztályt és sz névvel hivatkozunk rá
    /*
     * 
     * Mivel a konstruktor mindig lefut ezért nem hívunk meg semmit itt
     * A beolvasást már meghívta a konstruktor, meg a kiíratást is
     * A destruktor meg kiírja, hogy hány db szám van a string-ben
     * 
     */
    return 0;
}
