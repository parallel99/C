#include <iostream>


int main(){
	setlocale(LC_ALL, "");	
	
	int n;
	
 	printf("K�rem a nap sz�m�t: ");
	scanf("%d", &n);
	 	
 	if(0 < n &&  n < 6){
 		printf("H�tk�znap van!\n");
	} else if (n > 5 && n < 8) {
		printf("H�tv�ge van!\n");
	}
 	
 	switch(n){
	case 1: printf("H�tf�"); break;
	case 2: printf("Kedd"); break;
	case 3: printf("Szerda"); break; 
	case 4: printf("Cs�t�rt�k"); break;
	case 5: printf("P�ntek"); break; 
	case 6: printf("Szombat"); break;
	case 7: printf("Vas�rnap"); break; 
	default: printf("Nem egy nap sz�m�t adta meg!");
	}
 	
	return 0;
}
