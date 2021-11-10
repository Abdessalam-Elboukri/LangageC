#include <unistd.h>
#include <stdio.h>

int main(){
    
	float dist;
	
	printf("la distance en Mile : \n");
	scanf("%f" , &dist);
	
	dist=(dist / 1.609 ) * 1000 ;
	
	printf ("la distance en Metre : %f\n", dist);
	
	return 0;
}
