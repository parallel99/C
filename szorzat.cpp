#include <iostream>

int main(){
	setlocale(LC_ALL, "");
	int ossz = 1, n;
	
	printf("K�rek egy sz�mot:");
	scanf("%d", &n);
	
	while(n){
		ossz *= n;
		printf("K�rek egy sz�mot:");
		scanf("%d", &n);	
	}
	
	printf("%d", ossz);
}
