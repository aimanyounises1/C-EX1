#include <stdio.h>
#include "NumClass.h"

int isStrong(int n)
{
    int fact = 1, sum = 0;
    int r;
    
        int k = n;
        while (k != 0)
        {
            r = k % 10;
            fact = factorial(r);

            k = k / 10;
            sum = sum + fact;
        }
        
        if(sum == n){
          
            return 1;

        }

    return 0;
}

int isPrime(int num)
{
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int factorial(int f)  
    {  
        int mul=1;  
        for(int i=1; i<=f;i++)  
        {  
            mul=mul*i;  
        }  
        return mul;  
    }  