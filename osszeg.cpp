#include <iostream>

int main(){
	setlocale(LC_ALL, "");
	int ossz = 1, n;
	
	printf("Kérek egy számot:");
	scanf("%d", &n);
	
	while(n){
		ossz *= n;
		printf("Kérek egy számot:");
		scanf("%d", &n);	
	}
	
	printf("%d", ossz);
}
