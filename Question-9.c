// Input two numbers and swap them
#include<stdio.h>
int main(){
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
    getchar();
    return 0;

    
}