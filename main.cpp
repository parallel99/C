#include <cstdlib>
#include <string>

using namespace std;
void rendez(int*);

int main() {
    setlocale(LC_ALL, "");
    int db = 5;
    int tomb[db];
    for(int i = 0; i < db; i++){
        printf("Kérem a(z) %d. számot: ", (i+1));
        scanf("%d", &tomb[i]);
    }
    
    
    rendez(tomb);
    for(int i = 0; i < db; i++){
        printf("A(z) tömb %d. elme: %d \n", (i+1), tomb[i]);
    }
    return 0;
}

void rendez(int *t){
    int i, j;
    int csere;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4-i;  j++){
            if(t[j] > t[j+1]){
                csere = t[j];
                t[j] = t[j+1];
                t[j+1] = csere;
            }
        }
    }
}