#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int size_of_array;
  printf("Enter no of elements of an array:")
    scanf("%d",&size_of_array);
  int array[size_of_array];
  int *ptr=array;
  for (int i=0;i<size_of_array;i++){
    printf("Enter %d element of an array :",i+1);
    scanf("%d",&ptr[i]);
  }
  printf("The elements of an array are :");
  for (int i=0;i<size_of_array;i++){
    printf(" %d ",*(ptr+i));
  }
}

