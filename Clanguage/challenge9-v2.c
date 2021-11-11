#include <stdio.h>

int main(){
	
	float x1;
	float y1;
	float x2;
	float y2;
	float MN;
//	M CORDINATE
	
	printf("(x1 , y1) sont les coordonnées de M : \n");
	printf("x1 : ");
	scanf("%f" , &x1);
	printf("y1 : ");
	scanf("%f" ,&y1);
	
//	N CORDINATE

	printf("(x2 , y2) sont les coordonnées de N : \n");
	printf("x2 : ");
	scanf("%f" , &x2);
	printf("y2 : ");
	scanf("%f" ,&y2);
	
	MN= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("Distance entre M et N MN(m)= %.2f" ,MN);

return 0;

}
