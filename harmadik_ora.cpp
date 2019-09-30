#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>


int main(){
	setlocale(LC_ALL, "");
	/*
	  Ez lehet több soros (Jó  most nem arra Soros-ra gondolok)
	  Na és itt folytatom az egészet
	*/
	
	int a;
	
	printf("Kérek egy számot: ");
	scanf("%f", &a);
	
	if(a > 0){
		printf("A beírt szám pozítiv %d", &a);
	} else if(a < 0){
		printf("A beírt szám negatív %d", &a);
	} else {
		printf("A beírt szám 0");
	}
 	
	return 0;
}
