#include <unistd.h>
#include <stdio.h>

int main(){
    
    int a;
    int b;
    int c;

    printf("Saisire a : \n");
    scanf("%d", &a);

    printf("Saisire b : \n");
    scanf("%d", &b);
    
    printf("Saisire c : \n");
    scanf("%d", &c);

    printf(" La Somme est :%d \n Le moyenne: %d\n ", a+b+c,(a+b+c)/3);

    return 0;
}
