#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int mat2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int mat3[3][3];
  int*ptr1=&mat1;
  int*ptr2=&mat2;
  int*ptr3=&mat3;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      *ptr3=*ptr1+*ptr2;
      printf("   %d    ",*ptr3);
      ptr1++;
      ptr2++;
      ptr3++;
    }
    printf("\n");
  }
}

