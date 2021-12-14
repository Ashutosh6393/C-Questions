#include<stdio.h>
int sum(int,int);
void main(){
    int x,y;
    printf("enter the first number : ");
    scanf("%d",&x);
    printf("enter the second number : ");
    scanf("%d",&y);
    sum(x,y);
    
}

int sum(int a,int b){
    int i=a+b;
    printf("the sum is %d",i);
    
}