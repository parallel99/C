#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

/*
  Ez itt az életem értelme egy szép kis függvény
*/
void Osszeadas(int a, int b, int c){
	
	c = a + b;
	
	printf("Összeg-> %d + %d = %d\n", a, b, c);
}

void Kivonas(int a, int b, int c){
 	
 	c = a - b;
 	
 	printf("Kivonás eredménye-> %d - %d = %d\n", a, b, c);
}

void Szorzas(int a, int b, int c){

	c = a * b;
	
	printf("A szorzás eredménye-> %d * %d = %d\n", a, b, c);
}

void Osztas(int a, int b, float c){

 	c = (float) a / b;
 	
 	printf("Az osztás eredménye-> %d / %d = %0.2f\n", a, b, c);
}

void Maradekos_oszt(int a, int b, int c){

	c = a % b;
	
	printf("%d osztva %d és annak a mardéka: %d\n", a, b, c);
}

int main(){
	setlocale(LC_ALL, "");
	/*
	  Ez lehet több soros (Jó  most nem arra Soros-ra gondolok)
	  Na és itt folytatom az egészet
	*/
	
	
	int a, b, c;
	float o;
	
	printf("\nKérek egy számot:");
	scanf("%d", &a);
	
	printf("\nKérek egy másik számot:");
	scanf("%d", &b);
	
	
	
	Osszeadas(a, b, c);
	Kivonas(a, b, c);
	Szorzas(a, b, c);
	Osztas(a, b, o);
 	Maradekos_oszt(a, b, c);
 	
 	
 	unsigned char ch;
 	printf("\nKérek egy karaktert:");
	scanf("%c", &ch);
 	printf("Karakter %c Kód: %d\n", ch, ch);
 	
 	
	return 0;
}

