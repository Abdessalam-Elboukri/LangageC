#include<stdio.h>

int main(){
	
	int Nombre;
	
	printf("Ecriver Un Nombre :  \n");
	scanf("%d",&Nombre);
	
	int calc = Nombre%2 ;
	
	if(calc == 0){
		printf("Le Nombre est Pair");
	}else{
		printf("Le Nombre est Unpair");
	}
	
return 0;
}
