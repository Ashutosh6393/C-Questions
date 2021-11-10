// Input two numbers and swap them
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("The value of a is %d ",a);
    printf("\nThe value of b is %d ",b);
    // without using thrird variable 

    int x,y;
    printf("\nEnter the value of x :");
    scanf("%d",&x);
    printf("\nEnter the value of y :");
    scanf("%d",&y);
    int arr[2]={x,y};
    x=arr[1];
    y=arr[0];
    printf("\nthe value of x is %d ",x);
    printf("\nthe value of y is %d",y);


    
}


    