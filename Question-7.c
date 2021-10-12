// Printing the gross salary of the employee
#include <stdio.h>
void main()
{
    float sal;
    printf("\nEnter the Base salary : ");
    scanf("%f", &sal);
    float gs = 0.1 * sal + 0.12 * sal + 0.1 * sal + sal;
    printf("The gross salary is : %.3f", gs);
}