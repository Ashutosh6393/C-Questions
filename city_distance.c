#include <stdio.h>
#include<conio.h>
void main()
{
    float distance;
    printf("\nEnter the distance in kilometer : ");
    scanf("%f", &distance);
    printf("\nThe distance in meter is %.3f", distance * 1000);
    printf("\nThe distance in feet is %.3f", distance * 3280.84);
    getch();
}