#include <stdio.h>

int main(){
	
	float rayon , circonference;
	const float pi =3.14;
	
	printf("entrer le rayon du cercle : \n");
	scanf("%f" , &rayon);
	
	circonference = 2 * pi * rayon ;
	
	printf("la circonference de cette cercle est : %f" , circonference);
	
	return 0;
}
