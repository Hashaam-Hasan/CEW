// Basic printing

#include <stdio.h>

int main() {
    printf("Hello world");
  
    return 0;
}

// Number printing
#include <stdio.h>

int mynumber = 57;
float mypointnum = 67.44;
char mycharacter = 'X';
const float PIval = 3.14; // PI will never change

void main() {
  
    printf("NUMBER:%d\n",mynumber);
    printf("FLOAT:%f\n",mypointnum);
    printf("LETTER:%c\n",mycharacter);
    printf("PI value:%d\n",m);


}

//Checking Operators

#include <stdio.h>
#include <stdlib.h>

int x = 8; 
int y = 1;

int main() {
    printf("%d", x + y); //Assignment operator
    printf("%d", x > 2 && y < 9); //Relational and Logical operators
    
}

//Decimal precision

#include <stdio.h>
#include <stdlib.h>

float myFloatNum = 3.5;

int main() {
    
    printf("%f\n", myFloatNum); // Default shows 6 decimal places
    printf("%.1f\n", myFloatNum); // show till 1 places
    printf("%.2f\n", myFloatNum); // show till 2 places
    printf("%.4f\n",myFloatNum); //show till 4 places
    
}

//Different escape sequences


