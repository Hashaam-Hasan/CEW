
#include <stdio.h>
#include <stdlib.h>

int main(){
    int myNum=43;
    int* ptr=&myNum;
    printf("%d\n",myNum);
    printf("%p\n",&myNum);
    printf("%d\n",*ptr);
    return 0;
}

int main(){
    int myNum[4] = {25, 50, 75, 100};
    printf("%p\n", myNum);
    printf("%p\n", & myNum [0]);
    printf("%d", *myNum);
    printf("%d", *(myNum+1));

}

int main(){
    int myNum[4] = {25, 50, 75, 100};
    *myNum=13;
    *(myNum+1)=17;
    int *ptr=myNum;
    for(int i=0;i<4;i++){
        printf("%d\n",*(ptr+i));
    }

}

//Example 4
int main(){
    const int MAX=3;
    int var[] = {10, 100, 200};
    int i, *ptr;
    ptr = var;
    i = 0;
    while ( ptr <= &var[MAX - 1] ) {
    printf("Address of var[%d] = %x\n", i, ptr );
    printf("Value of var[%d] = %d\n", i, *ptr );
    ptr++;
    i++;
    }
    return 0;
}

//Example 5

const int MAX = 3;
    int main () {
    int var[] = {10, 100, 200};
    int i, *ptr[MAX];
    for ( i = 0; i < MAX; i++) {
        ptr[i] = &var[i];
    }
    for ( i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d\n", i, *ptr[i] );
    }
    return 0;
}



//Example 6
int main () {
    int var;
    int *ptr;
    int **pptr;
    var = 3000;
    ptr = &var;
    pptr = &ptr;
    printf("Value of var = %d\n", var );
    printf("Value available at *ptr = %d\n", *ptr );
    printf("Value available at **pptr = %d\n", **pptr);
    return 0;
}
//Changing the value using pointer
void gettheValueofA(int *ptr){
    *ptr=6;
}

int main(){
    int a=5;
    gettheValueofA(&a);
    printf("%d",a);
}


//Change value of variable
void gettheValueofB(int b){
    b=6;
}

int main(){
    int b=5;
    gettheValueofB(b);
    printf("%d",b);
}





int main(){
  int a=1;
  switch(a){
    case 1:
      printf("1");
      ;
    case 4:
      printf("4");
      ;
    default:
      printf("phuddu");
      ;
  }
}
