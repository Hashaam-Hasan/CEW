/*                       QUESTION 
a) Write a C program that checks whether the number is even or odd.
b) Check even or odd only if the number is positive*/

#include <stdio.h>

int main (){
    int num;
    
    printf("Enter a number to check whether it is even or odd: ");
    scanf("%d", &num);
    
    if (num >= 0) {
        if (num % 2 == 0) {
            printf("The given number is even.");
        }
    
        else{
            printf("The is odd.");
        }
    }
    else{
        printf("The number is negative.");
    }
}

