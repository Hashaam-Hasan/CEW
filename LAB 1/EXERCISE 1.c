
/*1. Write a C program that accepts an employee's ID, total worked hours in a month and
the amount received per hour. Print the ID and salary (with two decimal places) of the
employee for a particular month.*/
#include <stdio.h>
#include <stdlib.h>

int main () {

    int empID, salary_per_hour=999;
    float hours_worked;

    printf ("Enter Employee ID:");
    scanf ("%d", &empID);

    printf ("\nEnter total working hours this month:");
    scanf ("%f", &hours_worked);

    printf ("The total salary of Employee (ID = %d): Rs.%.2f", empID, salary_per_hour * hours_worked);
    return 0;
}

