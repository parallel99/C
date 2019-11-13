#include <iostream>

void tombbel(){
	int a[3] ;
	
 	printf("Kérem az elsõ számot: \n");
	scanf("%d", &a[0]);
	
	printf("Kérem a második számot: \n");
	scanf("%d", &a[1]);
	
	printf("Kérem a harmadik számot: \n");
	scanf("%d", &a[2]);
	 	
 	int min = INT_MAX;
 	
 	for(int i = 0; i < 3; i++){
 		if(min > a[i]){
 			min = a[i];
		}
	}
 	
 	printf("A legkissebb szám: %d\n", min);
}

void valtozoval(){	
	int a[3] ;
	
 	printf("Kérem az elsõ számot: \n");
	scanf("%d", &a[0]);
	
	printf("Kérem a második számot: \n");
	scanf("%d", &a[1]);
	
	printf("Kérem a harmadik számot: \n");
	scanf("%d", &a[2]);
	 	
 	int min = INT_MAX;
 	
 	for(int i = 0; i < 3; i++){
 		if(min > a[i]){
 			min = a[i];
		}
	}
 	
 	printf("A legkissebb szám: %d\n", min);
}

int main(){
	setlocale(LC_ALL, "");
	tombbel();
	//valtozoval();
}

