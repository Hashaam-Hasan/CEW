/*3. Write a C program to accept the height of a person in centimeters and categorize the
person according to his height. (Height < 150cm – Dwarf, Height=150cm – Average,
Height>=165cm – Tall).*/
#include <stdio.h>
#include <stdlib.h

int main (){
    float height;

    printf ("Enter Height of the Person in centimeters:");
    scanf ("%d", height);

    if(height<150) {
        printf ("Dwarf person", height);
    }

    else if(height==150) {
        printf ("Average person", height);
    }

    else if(height>=165) {
        printf ("Tall person", height);
    }
    return 0;

}

