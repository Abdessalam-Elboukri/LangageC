#include <stdio.h>

int main(){
	
	char alphabet;
	
	printf("Entrer un alphabet :\n");
	scanf("%c" , &alphabet);
	
	if( alphabet >=65 && alphabet <= 90){
		printf(" Cet alphabet est Majuscule.");
	}
	else if( alphabet >=97 && alphabet <= 122){
		printf("Cet alphabet est Minuscule . ");
	}
	else{
		printf("Entrer a valid alphabet.");
	}
	
return 0;
}
