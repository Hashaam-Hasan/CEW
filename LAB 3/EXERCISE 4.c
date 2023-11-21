#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int array[5]={1,2,3,4,5};
  int search;
  printf("Enter the value you want to search :");
  scanf("%d",&search);
  int*ptr1=array;
  int not_found=0;
  for (int i=0;i<5;i++){
    if(search==*(ptr1+i)){
      printf("%d is found at index %d",search,i);
      not_found=1;
      break;
    }
  }
  if(not_found==0){
    printf("Value not found");
  }
}

