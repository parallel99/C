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
	case 1: case 2: case 12: printf("Tél"); break; 
	case 3: case 4: case 5: printf("Tavasz"); break; 
	case 6: case 7: case 8: printf("Nyár"); break;
	case 9: case 10: case 11: printf("Ősz"); break; 
	default: printf("Nem egy hónapnak a számát adta meg!");
	}
 	
	return 0;
}
