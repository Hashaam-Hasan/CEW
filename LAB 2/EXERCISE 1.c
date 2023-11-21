//FOR LOOP:

#include <stdio.h>

int main() {
    int num , tot_sum = 0;
    printf("Enter any number:");
    scanf("%d",&num);
    for (int i = 1, count = 0; count < num; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
            tot_sum += i;
            count++;
        }
    }
    printf("\nSum: %d\n", tot_sum);
}

//WHILE LOOP:

#include <stdio.h>

int main() {
    int num,i =1, tot_sum = 0, count = 0;
    printf("Enter any Number:");
    scanf("%d",&num);
    while (count < num) {
        if (i % 2 != 0) {
            printf("%d ", i);
            tot_sum += i;
            count++;
        }
        i++;
    }
    printf("\nSum: %d\n", tot_sum);
}


//DO-WHILE LOOP:

#include <stdio.h>

int main() {
    int num, tot_sum = 0, i = 1, count = 0;
    printf("Enter any number:");
    scanf("%d",&num);
    do {
        if (i % 2 != 0) {
            printf("%d ", i);
            tot_sum += i;
            count++;
        }
        i++;
    } while (count < num);
    printf("\nSum: %d\n", tot_sum);

    return 0;
}

