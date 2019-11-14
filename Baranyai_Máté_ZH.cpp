#include <iostream>
#include <stdio.h>

char numerikus(char*);
void beolvas(char*);

int main() {
	setlocale(LC_ALL, "");
	
	char szoveg[100];
	
    beolvas(szoveg);
    
    if(numerikus(szoveg) > '0'){
       	printf("Numerikus");
    } else {
   	    printf("Nem numerikus");
    }
    
    return 0;	
}

char numerikus(char *szoveg) {
    int szam, karakter = 0;
    
    while (*szoveg) {
        if (*szoveg >= '0' && *szoveg <= '9') {
            szam++;
        } else {
        	return 0;
		}
        szoveg++;
        karakter++;
    }
    
    if(szam == karakter){
        return '1';
    } 
    return 0;
}

void beolvas(char *szoveg) {
    printf("Kérem a szöveget: ");
    
    scanf("%[^\n]", szoveg);
}
