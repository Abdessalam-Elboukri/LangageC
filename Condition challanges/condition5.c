#include <stdio.h>
#include <math.h>

int main (){
	
	float a,b,c ;
	
	printf("entrer a : \n");
	scanf("%f" , &a);
	
	printf("entrer b : \n");
	scanf("%f" , &b);
	
	printf("entrer c : \n");
	scanf("%f" , &c);
	
	float delta = (b * b) - 4 * (a * c) ;
	
	printf("Delta est : %f \n " , delta );
	
	if(delta == 0){
		printf(" le solution d'equation est : %.2f" , -b/2*a);
	}
	if (delta > 0){
		printf("l 'equation accept deux solutions %.2f et %.2f", (-b + sqrt(delta)) /(2*a) , (-b - sqrt(delta)) /(2*a) );
	}
	
	if(delta < 0){
	
		printf("le solution n'est pas accept aucun solution");
	}	
	
	
}
