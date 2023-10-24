/*5. Write a function to calculate the nth Fibonacci number and call it recursively to print
the Fibonacci series.*/
# include <stdio.h>
# include <stdlib.h>

int fab (a, b, num) {

    int x=a, y=b, z, n=num;

    if (n==0)
        return 0;
    else {
        z = x+y;
        printf ("%d ", z);
        return fab (y, z, n-1);

    }
}
int main () {

    int a=0, b=1, num;

    printf ("\t\tFIBONACCI SERIES\n\nEnter any nth term for Fibonacci series: ");
    scanf ("%d", &num);

    printf ("\t\t1 ");
    fab (a, b, num);

}

