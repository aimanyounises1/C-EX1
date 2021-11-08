#include <stdio.h>
#include "NumClass.h"
int main(){
    int num1;
    int num2;
    printf("Please enter the first number = ");
    scanf("%d" , &num1);
    printf("Please enter the second number = ");
    scanf("%d" , &num2);
    printf("The prime numbers are : \n");

    for (int i  =  num1 ; i <= num2 ; i++){
        if (isPrime(i) == 1){
            printf("%d," , i);
        }
    }
    printf("\nThe Armstrong numbers are :\n");
    for (int i  =  num1 ; i <= num2 ; i++){
        if (isArmstrong(i) == 1){
            printf("%d," , i);
        }
    }
    printf("\nThe strong numbers are : \n");
    for (int i  =  num1 ; i <= num2 ; i++){
        if (isStrong(i) == 1){
            printf("%d," , i);
        }
    }
    printf("\nThe palindrome numbers are : \n");
    for (int i  =  num1 ; i <= num2 ; i++){
        if (isPalindrome(i) == 1){
            printf("%d," , i);
        }
    }

return  0;
}