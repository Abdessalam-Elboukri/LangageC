#include<stdio.h>  


int main(){
	
	int i, space, star , totalrows;
	
	printf("entrer un nombre: \n");
	scanf("%d" , &totalrows);
	
	for(i = 1 ; i <= totalrows ; i++)
		{
			for( space = 1; space <= (totalrows - i) ; space++)
				{
					printf(" ");
				}
			for( star = 1 ; star <= (i * 2 ) - 1 ; star++)
				{
					printf("*");
				}
		printf("\n");
		}
	
	return 0;
}
