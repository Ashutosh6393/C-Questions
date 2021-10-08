// Input principle, amount and rate and print S.I
#include<stdio.h>
void main(){
    float pri, rate, time;
    printf("Enter the principle,rate, time by giving spaces B/W them : ");
    scanf("%f %f %f",&pri,&rate,&time);
    printf("The Simple Intrest is : %.3f",(pri*rate*time)/100);
    
}