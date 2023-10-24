/*4. Write a program in C to convert a decimal number to a binary number using functions.*/
#include <stdio.h>
#include <stdlib.h>

int main () {

    printf ("\tDECIMAL TO BINARY CONVERTER\n");

    int num;

    printf ("ENTER A DECIMAL NUMBER: ");
    scanf ("%d”, &num);

    printf ("BINARY EQUIVALENT: %d”, dec_to_bin(num));
    return 0;

}

int dec_to_bin(num){

  int dec = num, bin=0, rem=0, place=1;
  while(dec){
        rem=dec%2;
        dec=dec/2;
        bin=bin + (rem*place);
        place=place*10;

    }
    return bin;

}

