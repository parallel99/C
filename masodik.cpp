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
	
	float a, b, c;
	
	printf("Kérem az a oldal hosszát: ");
	scanf("%f", &a);
	
	printf("Kérem a b oldal hosszát: ");
	scanf("%f", &b);
	
	printf("Kérem a c oldal hosszát: ");
	scanf("%f", &c);

	float A = 2*(a*b+b*c+a*c);
	float V = a*b*c;
	
	printf("Térfogat: %0.2f\nFelszín: %0.2f\n", V, A);
 	
	return 0;
}

