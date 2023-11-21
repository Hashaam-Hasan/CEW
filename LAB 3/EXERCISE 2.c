#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[]="Samad";
    char*ptr=string;
    printf("The reverse string is ");
    for (int i=strlen(ptr);i>=0;i--){
        printf("%c",*(ptr+(i-1)));
    }
}
