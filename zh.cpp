#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

void beolvas(char*);
char numerikus(char*);

/*

A program eldonti egy string-rol, hogy az numerikus -e.

*/

int main() {
    setlocale(LC_ALL, "");
    char szoveg[80];
    beolvas(szoveg);
    
    if(numerikus(szoveg) == '1'){
        printf("A szöveg numerikus!");
    } else {
        printf("A szöveg nem numerikus!");
    }
    return 0;
}

void beolvas(char *szoveg) {
    printf("Kérek egy szöveget: ");
    fflush(stdin);
    scanf("%[^\n]", szoveg);
    fflush(stdin);
}

char numerikus(char *szoveg) {
    int szamok = 0;
    int karakterek = 0;
    while (*szoveg) {
        if (*szoveg >= '0' && *szoveg <= '9') {
            szamok++;
        }
        szoveg++;
        karakterek++;
    }
    if(szamok == karakterek){
        return '1';
    } 
    
    return 0;
}
