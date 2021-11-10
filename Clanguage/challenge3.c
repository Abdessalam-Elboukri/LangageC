#include <unistd.h>
#include <stdio.h>

int main(){
    
	float dist;
	
	printf("la distance en Metre : \n");
	scanf("%f" , &dist);
	
	dist=(dist / 1000 ) * 1.609 ;
	
	printf ("la distance en Mile : %f\n", dist);
	
	return 0;
}
