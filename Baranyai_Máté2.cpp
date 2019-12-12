#include <stdio.h>
#include <iostream>

using namespace std;

class tomb {
protected:
    char szoveg[80];
public:
    void be() {
    	printf("Kérem a szöveget: ");
    	scanf("%[^\n]", szoveg);
    }
};

class karakterszam: public tomb {
private:
    int szam = 0;
    int karakter = 0;
    
public:
	
    int count(char szoveg[]) {
        this->szam = szam;
        this->karakter = karakter;
        
        while (*szoveg) {
        if (*szoveg >= '0' && *szoveg <= '9') {
            szam++;
        }
         	szoveg++;
	 		karakter++;
    	}
    	return szam;
    }
	
    int ki(){
        return count(szoveg);
    }
};

int main() {
	setlocale(LC_ALL, "");
	
    karakterszam obj;
    obj.be();
    cout << "A karakterek száma: " << obj.ki();
    
    return 0;
}
