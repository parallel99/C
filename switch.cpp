#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>


int main(){
	setlocale(LC_ALL, "");	
	
	int n;
	
 	printf("\nKérem a hónap számát: ");
	scanf("%d", &n);
 	
 	switch(n){
	case 1: printf("Január"); break; 
	case 2: printf("Február"); break; 
	case 3: printf("Március"); break; 
	case 4: printf("Április"); break; 
	case 5: printf("Május"); break; 
	case 6: printf("Junius"); break; 
	case 7: printf("Július"); break; 
	case 8: printf("Augusztus"); break; 
	case 9: printf("Szeptember"); break; 
	case 10: printf("Október"); break; 
	case 11: printf("November"); break; 
	case 12: printf("December"); break; 
	default: printf("Nem egy hónapnak a számát adta meg!");
	}
 	
	return 0;
}
