#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    
    char c;
    /*
	c = getchar();
    while(c != '\n'){
        putchar(c);
        c = getchar();
    }
	*/
    
    int db = 0;
    int lowercase = 0;
    int uppercase = 0;
    int numbers = 0;
    int rows = 0;
    
    while((c = getchar()) != EOF){
    	//putchar(c);
		db++;
    	if(c >= 'A' && c <= 'Z'){
    		uppercase++;
		} else if(c >= 'a' && c <= 'z'){
			lowercase++;
		} else if(c >= '0' && c <= '9'){
			numbers++;
		} else if(c == '\n'){
			rows++;
		}
	}
	cout << "\n--------------------------------";
	cout << "\n\tA karakterek sz�ma: " << db;
	cout << "\n\tA nagy karakterek sz�ma: " << uppercase;
	cout << "\n\tA kicsi karakterek sz�ma: " << lowercase;
	cout << "\n\tA sz�m karakterek sz�ma: " << numbers;
	cout << "\n\tA sorok sz�ma: " << rows;
	
    return 0;
}

