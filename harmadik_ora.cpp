#include <iostream>


int main(){
	setlocale(LC_ALL, "");	
	
	int n;
	
 	printf("Kérem a nap számát: ");
	scanf("%d", &n);
	 	
 	if(0 < n &&  n < 6){
 		printf("Hétköznap van!\n");
	} else if (n > 5 && n < 8) {
		printf("Hétvége van!\n");
	}
 	
 	switch(n){
	case 1: printf("Hétfõ"); break;
	case 2: printf("Kedd"); break;
	case 3: printf("Szerda"); break; 
	case 4: printf("Csütörtök"); break;
	case 5: printf("Péntek"); break; 
	case 6: printf("Szombat"); break;
	case 7: printf("Vasárnap"); break; 
	default: printf("Nem egy nap számát adta meg!");
	}
 	
	return 0;
}
