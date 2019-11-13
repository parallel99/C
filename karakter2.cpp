#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    
   	char szoveg[10], *s = szoveg;
   	printf("Kérek  egy szöveget:");
	
	while((*s = getchar()) != '\n'){
		s++;
	}
	
	s = szoveg;
	
	while(*s){
		putchar(*s);
		s++;
	}
	
	
    return 0;
}

