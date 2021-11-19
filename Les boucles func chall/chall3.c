#include<stdio.h>

int main(){
	
	int n, i;
	printf("enter une valeur :\n");
	scanf("%d" ,&n);
	
	int j=0;
	
	for(i = 1 ; i <= n ; i++)
	{
		if(n % i == 0){
			j++;
		}
	}
	
	if(j== 2){
		printf(" le nombre %d est premier .", n);
	}
	else{
		printf("le nombre n'a pas un premier");
	}
	
return 0;
}
