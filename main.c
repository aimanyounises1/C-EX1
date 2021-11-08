#include <stdio.h>
#include "NumClass.h"
int main(){
    int num1;
    int num2;
    printf("Please enter the first number = ");
    scanf("%d" , &num1);
    printf("Please enter the second number = ");
    scanf("%d" , &num2);
    printf("printing the prime numbers\n");

    for (int i  =  num1 ; i <= num2 ; i++){
        if (isPrime(i) == 1){
            printf("%d," , i);
        }
    }
    printf("\n printing the the armstrong numbers\n");
    for (int i  =  num1 ; i <= num2 ; i++){
        if (isArmstrong(i) == 1){
            printf("%d," , i);
        }
    }
    printf("\n printing the Strong numbers \n");
    for (int i  =  num1 ; i <= num2 ; i++){
        if (isStrong(i) == 1){
            printf("%d," , i);
        }
    }
    printf("\n printing the Palindrome numbers \n");
    for (int i  =  num1 ; i <= num2 ; i++){
        if (isPalindrome(i) == 1){
            printf("%d," , i);
        }
    }

return  0;
}