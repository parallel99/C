#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

/*
  Ez itt az életem értelme egy szép kis függvény
*/


int main(){
	setlocale(LC_ALL, "");
	/*
	  Ez lehet több soros (Jó  most nem arra Soros-ra gondolok)
	  Na és itt folytatom az egészet
	*/
	
	int a, b, c;
	
	
	a = 5;
	b = 7;
	
	printf("\nKérek egy számot:");
	scanf("%d", &a);
	
	printf("\nKérek egy másik számot:");
	scanf("%d", &b);
	c = a + b;
	
	printf("Összeg-> %d + %d = %d", a, b, c);
 	
	return 0;
}
