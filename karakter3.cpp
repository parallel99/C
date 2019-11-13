#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    
   	char szoveg[5][80];
   	
   	for(int i = 0; i < 5; i++){
	   int j = 0;
	   /*while((szoveg[i][j] = getchar()) != '\n'){
   			j++;
	   }
	   szoveg[i][j] = '\0';*/
	   fflush(stdin);
	   scanf("%[^\n]", szoveg[i]);
	}
	for(int i = 0; i < 5; i++){
		printf("%s\n", szoveg[i]);
	}
    return 0;
}

