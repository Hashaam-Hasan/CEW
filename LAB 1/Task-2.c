/*                 QUESTION
Write a C program that does the following:
A) Take two integers as input
B)If both the numbers are greater than 5, add them.
C)If either one of them is greater than 5, multiply them.
D)Else print "Hello World". */

#include <stdio.h>

int main (){

    int num1, num2;
    
    printf("Enter integer 1: ");
    scanf("%d", &num1);
    
    printf("Enter integer 2: ");
    scanf("%d", &num2);
    
    if (num1 > 5 && num2 > 5){
        printf("The sum is: %d", num1+num2);
    }
    
    else if(num1 > 5 || num2 > 5){
        printf("The product is: %d", num1*num2);
    }
    
    else{
        printf("Hello world.");
    }
}
