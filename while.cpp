#include <iostream>

int main(){
	setlocale(LC_ALL, "");
	int n, i = 0;
	
	printf("K�rek egy sz�mot:");
	scanf("%d", &n);
	
	printf("El�l tesztel�s ciklus:");
	while(i <= n){
		printf("%d; ", i);
		i++;
		if(i % 10 == 0){ //csak 10 elemenk�nt 1db sort�r�s
			printf("\n");
		}
	}
	
	printf("H�ttul tesztel�s ciklus:");
	do{
		printf("%d; ", i);
		i++;
		if(i % 10 == 0){ //csak 10 elemenk�nt 1db sort�r�s
			printf("\n");
		}
	} while(i <= n);

}
