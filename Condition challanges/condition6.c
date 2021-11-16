#include<stdio.h>

int main(){
	
	int years , num;
	
	printf("entrer les nombres du l'anneés \n");
	scanf("%d",&years);
	
	float years_months = years * 12 ;
	float years_days = years *365 ;
	float years_hours = years_days * 24;
	float years_minutes = years_hours * 60;
	float years_seconds = years_minutes * 60;
	
	
	printf("Convert to Monhts (Press 1) || Convert to Days (Press 2) || Convert to Hours (Press 3)||Convert to Minutes (Press 4)||Convert to Second (Press 5) . \n");
	scanf("%d" , &num);
	switch(num){
        case 1:
            printf("%f", years_months);
            break;

        case 2:
            printf("%f", years_days);
            break;
        case 3:
            printf("%f", years_hours);
            break;
        case 4:
            printf("%f", years_minutes);
            break;
        case 5:
            printf("%0.1f", years_seconds);
            break;
    }

	return 0;
	
}
