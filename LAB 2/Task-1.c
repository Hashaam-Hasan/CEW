#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  scanf("%d",&n);
  for (int a=10;a<n+1;a++){
    printf("Value of a:%d\n",a);
  }
  return 0;
}


int main(){
    int n;
    int sum=0;
    int x=1;
    printf("ENTER VALUE OF N :");
    scanf("%d",&n);
    for(int a=0;a<n;a++){
            printf(" %d ",a+x);
            x++;
            sum=sum+2*a+1;
    }
    printf("\nSUM OF N ODD NUMBERS IS %d",sum);
}


int main(){
  int n;
  printf("ENTER THE NUMBER :");
  scanf("%d",&n);
  int a=1;
  printf("TABLE OF %d IS \n",n);
  while(a<=10){
    if(a%2==0){
      a++;
      continue;
    }
    printf("%d x %d =%d\n",n,a,n*a);
    a++;
  }
}



int main(){
    while(1){
      int n;
      printf("ENTER A NUMBER :");
      scanf("%d",&n);
      if(n<0){
        printf("OOPS! NUMBER SHOULD BE POSITIVE");
        break;
      }
      int a=1;
      while(a<11){
        printf("%d x %d =%d\n",n,a,n*a);
        a++;
      }
    }
}

int main(){
  int myNumber[]={25,50,75,100};
  for(int i=0;i<sizeof(myNumber);i++){
    printf("%d\n",myNumber[i]);
  }
}


int main(){
  int matrix[3][3]={{1,4,2},{3,6,8},{2,3,4}};
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      int res = matrix[i][j] +5;
      printf(" %d ",res);
    }
    printf("\n") ;
  }
}
