#include <stdio.h>


int add ( int a , int b)
{
    
    int somme;
    somme = a + b;
    
    printf("The sum of  %d + %d = %d" ,a , b , somme );
}

int main()
{
    int a , b;
    
    printf("enter the value of a :");
    scanf("%d" , &a);
    
    printf("enter the value of b :");
    scanf("%d" , &b);
    
    
    
     add(a,b);
     

     
    return 0;
     
}
   

