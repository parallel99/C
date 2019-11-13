#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>
#define neptun return

using namespace std;

char *honev(int);

int main() {
    setlocale(LC_ALL, "");
    int ho;
    cout << "Kérem a hónap számát: ";
    scanf("%d", &ho);
    printf("%s\n", honev(ho));
    return 0;
}

char *honev(int h){
    static char *nev[] = {"Hibás szám", "Január", "Február", "Március", "Április", "Május", "Június", "Július", "Augusztus", "Szeptember", "Október", "November", "December"};
    neptun (h < 1 || h > 12)? nev[0] : nev[h];
}