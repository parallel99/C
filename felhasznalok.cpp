#include <cstdlib>
#include <string>

using namespace std;

struct data {
    int id;
    char name[40];
    float money;
};

int beolvas(data *);
void kiir(int, data*);
void keres(int, data*);
void torles(int* , data*);

int main() {
    int db;
    data a[100];
    db = beolvas(a);
    //kiir(db, a);
    //keres(db, a);
    torles(&db, a);
    kiir(db, a);
    return 0;
}

int beolvas(data *f) {
    int db = 0;
    printf("Kérem az azonosítót: ");
    scanf("%d", &f->id);
    while (f->id) {
        printf("Kérem a nevet: ");
        scanf("%s", &f->name);
        printf("Kérem a fizetést: ");
        scanf("%f", &f->money);
        db++;
        f++;
        printf("Kérem az azonosítót: ");
        scanf("%d", &f->id);
    }

    return db;
}

void keres(int n, data *f) {
    int id;
    printf("Kérem a keresendő azonósítot: ");
    scanf("%d", &id);
    for (; n > 0; n--, f++) {
        if (id == f->id) break;
    }
    if (n) {
        printf("%8d%41s%8.5f\n", f->id, f->name, f->money);
    } else {
        printf("Nincs ilyen felhasználó!");
    }
}

void kiir(int n, data *f) {
    printf("%8s%41s%8.8s\n", "Azonosító", "Név", "Fizetés");
    for (; n > 0; n--, f++) {
        printf("%8d%41s%8.5f\n", f->id, f->name, f->money);
    }
}

void torles(int *n, data *f){
    int i;
    int id;
    printf("Kérem a törlendő elem azonosítóját: ");
    scanf("%d", &id);
    for(i = 0; i < *n; i++, f++){
        if(id == f->id) break;
    }
    if(i == *n){ 
        printf("Nincs ilyen elem!");
    } else {
        for(; i < *n; i++, f++){
            *f = *(f+1);
        }
        (*n)--;
    }
}
