#include <unistd.h>
#include <stdio.h>

int main(){
    
    float temp;

    printf("Temperature en F : \n");
    scanf("%f", &temp);

    temp = (temp -32) / 1.8;

    printf("Temperature en C : %f\n", temp);

    return 0;
}
