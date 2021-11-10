// Input 5 digit number and print its sum()

#include<stdio.h>
void main(){
    int num;
    printf("Enter a 5 digit number : ");
    scanf("%d",&num);
    int sum=0,b;
    while (num>0)
    {
        b=num%(10);
        sum=sum+b;
        num=(num)/10;

    }
    printf("The sum is : %d",sum);



}