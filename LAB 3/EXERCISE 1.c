#include <stdio.h>
#include <stdlib.h>

//Basic Logic

int main(){
  int a,b;
  printf("Enter the first element:");
  scanf("%d",&a);
  printf("Enter the second element:");
  scanf("%d",&b);
  int c=a;
  a=b;
  b=c;
  printf("The first element after swapping is %d\n",a);
  printf("The second element after swapping is %d",b);
  return 0;
}

//Using Pointers

int main(){
  int a,b;
  int*ptr1=&a;
  int*ptr2=&b;
  int*ptr3='NULL';
  printf("Enter the first element:");
  scanf("%d",&a);
  printf("Enter the second element:");
  scanf("%d",&b);
  ptr3=ptr1;
  ptr1=ptr2;
  ptr2=ptr3;
  printf("The first element after swapping is %d\n",*ptr1);
  printf("The second element after swapping is %d",*ptr2);
  return 0;
}
