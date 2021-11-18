#include <stdio.h>
#include <stdbool.h>
    bool prime(int n)
	{
        int a=0;
        int i;
        
        for( i = 1 ; i<=n ;i++)
		{


        if(n % i == 0){
            a++;
        }

        }

          if(a == 2){
            printf("true");

        }
        else {
        printf("false");

        }

    }
int main()

{
	int s;
	
	printf("enter a number and the program will check if prime (true) or not (false) \n");
	scanf("%d" , &s);

    prime(s);
    return 0;
}

