#include <stdio.h>

int main() {
	
	int Nbr;
	
	printf("Entrer Un Nombre :\n");
	scanf("%d" , &Nbr);
	
	if(Nbr > 0){
		printf ("Ce Nombre est Positif .");
	}
	else if(Nbr < 0){
		printf("Ce Nombre est N�gatif .");
	}
	else if(Nbr = 0){
		printf("Ce Nombre est �gal a Zero .");
	}
	else{
		printf("invalid Nombre .");
	}
	  
return 0;
}
