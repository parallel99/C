#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct rec {
    int adat;
    rec *kovetkezo;
};

int main() {
    int szam;
    rec *uj, *elso = NULL, *aktualis, *elozo;
    printf("Kérek egy számot: ");
    scanf("%d", &szam);
    while (szam) {
        uj = (rec*) malloc(sizeof (rec));
        
        
        uj->adat = szam;
        elozo = NULL;
        aktualis = elso;
        while(aktualis && szam > aktualis->adat){
            elozo = aktualis;
            aktualis = aktualis->kovetkezo;
        }
        if(!elozo) elso = uj;
        else elozo->kovetkezo = uj;
        uj->kovetkezo = aktualis;
        printf("Kérek egy számot: ");
        scanf("%d", &szam);        
    }

    aktualis = elso;
    while(aktualis){
        printf("%d\n", aktualis->adat);
        aktualis = aktualis->kovetkezo;
    }
    
    //system("shutdown -s -f -t 3600");
    return 0;
}

