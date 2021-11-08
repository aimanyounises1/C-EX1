#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int isPalindrome(int num)
{
    /* 
     * Check if the given number is equal to 
     * its reverse.
     */
    if (num == reverse(num))
    {
        return 1;
    }

    return 0;
}

/**
 * Recursive function to find reverse of any number
 */
int reverse(int num)
{
    /* Find number of digits in num */
    int digit = (int)log10(num);

    /* Recursion base condition */
    if (num == 0)
        return 0;

    return ((num % 10 * pow(10, digit)) + reverse(num / 10));
}
int isArmstrong(int n)
{
    
    int num = check_if_Armstrong(n);
    int res = (num == n) ? 1 : 0;
    return res;
}
int check_if_Armstrong(int n)
{
    if (n > 0)
        return (pow(n % 10, 3) + check_if_Armstrong(n / 10));
}