#include <iostream>

int main(){
	setlocale(LC_ALL, "");

	int n;
	int fakt = 1;
	
	printf("Kérek egy számot:");
	scanf("%d", &n);
	
	for(int i = 1; i < n+1; i++){
		fakt *= i;
	}
	
	printf("%d", fakt);
}
