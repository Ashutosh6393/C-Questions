#include<stdio.h>
void swap(int, int);
void main(){
    int x,y;
    printf("enter first number : ");
    scanf("%d",&x);
    printf("enter the second number : ");
    scanf("%d",&y);
    swap(x,y);

}

void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("the value of a is %d and b is %d",a,b);

}

