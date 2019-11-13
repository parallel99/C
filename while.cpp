#include <iostream>

int main(){
	setlocale(LC_ALL, "");
	int n, i = 0;
	
	printf("Kérek egy számot:");
	scanf("%d", &n);
	
	printf("Elõl tesztelõs ciklus:");
	while(i <= n){
		printf("%d; ", i);
		i++;
		if(i % 10 == 0){ //csak 10 elemenként 1db sortörés
			printf("\n");
		}
	}
	
	printf("Háttul tesztelõs ciklus:");
	do{
		printf("%d; ", i);
		i++;
		if(i % 10 == 0){ //csak 10 elemenként 1db sortörés
			printf("\n");
		}
	} while(i <= n);

}
