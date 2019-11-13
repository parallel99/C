#include <cstdlib>
#include <string>

using namespace std;

bool Vizsgalat(char*);

int main() {
    setlocale(LC_ALL, "");
    char szoveg[80];
    printf("Kérek egy szöveget: ");
    scanf("%[^\n]", &szoveg);
    if(Vizsgalat(szoveg)){
        printf("A szöveg visszafelé is ugyanaz!");
    } else {
        printf("A szöveg visszafelé nem ugyanaz!");
    }
    return 0;
}

bool Vizsgalat(char *s){
    char *p = s;
    while(*p)p++;
    p--;
    while(s < p){
        if(*s  != *p){
            return false;
        }
        s++;
        p--;
    }
    return true;
}