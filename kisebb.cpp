#include <iostream>

void tombbel(){
	int a[3] ;
	
 	printf("K�rem az els� sz�mot: \n");
	scanf("%d", &a[0]);
	
	printf("K�rem a m�sodik sz�mot: \n");
	scanf("%d", &a[1]);
	
	printf("K�rem a harmadik sz�mot: \n");
	scanf("%d", &a[2]);
	 	
 	int min = INT_MAX;
 	
 	for(int i = 0; i < 3; i++){
 		if(min > a[i]){
 			min = a[i];
		}
	}
 	
 	printf("A legkissebb sz�m: %d\n", min);
}

void valtozoval(){	
	int a[3] ;
	
 	printf("K�rem az els� sz�mot: \n");
	scanf("%d", &a[0]);
	
	printf("K�rem a m�sodik sz�mot: \n");
	scanf("%d", &a[1]);
	
	printf("K�rem a harmadik sz�mot: \n");
	scanf("%d", &a[2]);
	 	
 	int min = INT_MAX;
 	
 	for(int i = 0; i < 3; i++){
 		if(min > a[i]){
 			min = a[i];
		}
	}
 	
 	printf("A legkissebb sz�m: %d\n", min);
}

int main(){
	setlocale(LC_ALL, "");
	tombbel();
	//valtozoval();
}

