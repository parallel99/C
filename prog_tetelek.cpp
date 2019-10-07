#include <cstdlib>
#include <iostream>
#include <string>
#define MAX 5

using namespace std;

void feladat1(int feladat_szam){
    printf("%d. feladat:\n", feladat_szam);
    int i;
    unsigned char j = 5;
    
    for(i = 1 ; i < 10 ; j--, i++){
        printf("%d\n", j);
    }
}

void feladat2(int feladat_szam){
    printf("%d. feladat:\n", feladat_szam);
    int i;
    char j = -122;
    
    for(i = 1 ; i < 10 ; j--, i++){
        printf("%d\n", j);
    }
}

void feladat3(int feladat_szam){
    printf("%d. feladat:\n", feladat_szam);
    int i;
    float j = 1E-35;
    
    for(i = 1 ; i < 10 ; j /= 10, i++){
        printf("%g\n", j);
    }
}

void feladat4(int feladat_szam){
    printf("%d. feladat:\n", feladat_szam);
    int i;
    float j = 10E35;
    
    for(i = 1 ; i < 10 ; j *= 10, i++){
        printf("%f\n", j);
    }
}

void feladat5(int feladat_szam){
    printf("%d. feladat:\n", feladat_szam);
    int tomb[4];
    
    for(int i = 0; i < 5; i++){
        printf("Kérem a tömb %d. elemét:", (i+1));
        scanf("%d", &tomb[i]);
    }
    
    for(int i = 0; i < 5; i++){
        printf("A tömb %d eleme: %d\n", (i), tomb[i]);
    }
}

void MinMax(int feladat_szam){
    printf("%d. feladat:\n", feladat_szam);
    int tomb[5];
    int min, max;
    
    for(int i = 0; i < 5; i++){
        printf("Kérem az %d. számot:", (i+1));
        scanf("%d", &tomb[i]);
    }
    
    min = max = tomb[0];
    
    for(int i = 0; i < 5; i++){
        if(min > tomb[i]){ 
            min = tomb[i];
        }
        if(max < tomb[i]){ 
            max = tomb[i];
        }
    }
    
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
}

void BubiRendezes(int feladat_szam){
    printf("%d. feladat:\n", feladat_szam);
    int tomb[5];
    int csere;
    
    for(int i = 0; i < MAX; i++){
        printf("Kérem az %d. számot:", (i+1));
        scanf("%d", &tomb[i]);
    }
    
    for(int i = 0; i < MAX-1; i++){
        for(int j = 0; j < MAX-i-1; j++){
            if(tomb[j] > tomb[j+1]){
                csere = tomb[j];
                tomb[j] = tomb[j+1];
                tomb[j+1] = csere;
            }
        }
    }
    
    for(int i = 0; i < 5; i++){
       printf("tomb: %d\n", tomb[i]);
    }
 
}

int main() {
    setlocale(LC_ALL, "");
    //feladat1(1);
    //feladat2(2);
    //feladat3(3);
    //feladat4(4);
    //MinMax(6);
    BubiRendezes(7);
    //printf(" %d: \n", MAX);
    return 0;
}

