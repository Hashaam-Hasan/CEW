/*2. Write a C program that takes the height and width of a rectangle as an input from user
and compute the perimeter and area of a rectangle.*/
#include <stdio.h>
int main () {

    float height, width;

    printf ("Enter Height of the Rectangle:");
    scanf ("%f", &height);

    printf ("\nEnter Width of the Rectangle:");
    scanf ("%f", &width);

    printf ("Perimeter of the Rectangle:\t %.2f m", height*2+width*2);
    printf ("\nThe Area of the Rectangle:\t %.2f sq.m", height*width);
    return 0;
}

