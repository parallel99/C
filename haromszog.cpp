/* 
 * File:   szovegek.cpp
 * Author: Erik
 *
 * Created on 2019. október 21., 12:08
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

bool haromszog(bool);

int main() {
    setlocale(LC_ALL, "");
    
    bool szerkesztheto = false;
    
    szerkesztheto = haromszog(szerkesztheto);
    
    if(szerkesztheto){
        cout << "A háromszög megszerkeszthető! 😀😀";
    } else {
        cout << "A háromszög nem megszerkeszthető!";
    }
    
    return 0;
}

bool haromszog(bool sz){
    int a, b, c;
    cout << "Kérem az 'a' oldal hosszát: ";
    scanf("%d", &a);
    cout << "Kérem az 'b' oldal hosszát: ";
    scanf("%d", &b);
    cout << "Kérem az 'c' oldal hosszát: ";
    scanf("%d", &c);
    
    if(a + b > c && a + c > b && b + c > a){
        sz = true;
    }
    
    return sz;
}