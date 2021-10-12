#include<stdio.h>


counting(int n){
    if(n<=0){
        return ;
    }
    counting(n-1);

    printf("%d",n);

}


void main(){
    int a;
    printf("\nEnter a number ");
    scanf("%d",&a);
    counting(a);

}