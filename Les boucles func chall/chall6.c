
#include <stdio.h>


int exchange ( int a , int b)
{
    
    int x ;
    x=a;
    a=b;
    b=x;
  
    printf( "AFTER SWAPING \na = %d \nb = %d \n" , a , b);
}

int main()
{
    int a , b;
    
    printf("enter the value of a :");
    scanf("%d" , &a);
    
    printf("enter the value of b :");
    scanf("%d" , &b);
    
     exchange(a,b);
     

     
    return 0;
     
}
   
