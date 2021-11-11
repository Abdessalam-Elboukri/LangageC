#include <unistd.h>
#include <stdio.h>
#include <math.h>

int main(){
	
	int x1;
	int y1;
	int x2;
	int y2;
	
//	M CORDINATE
	
	printf("(x1 , y1) sont les coordonnées de M : \n");
	printf("x1 : ");
	scanf("%d" , &x1);
	printf("y1 : ");
	scanf("%d" ,&y1);
	
//	N CORDINATE

	printf("(x2 , y2) sont les coordonnées de N : \n");
	printf("x2 : ");
	scanf("%d" , &x2);
	printf("y2 : ");
	scanf("%d" ,&y2);
	
	int result = sqrt((x2-x1)^2 + (y2-y1)^2);
	printf("Distance entre M et N : %d" ,result);

return 0;
	
}
