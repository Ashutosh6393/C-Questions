//Input two numbers and print greatest of them
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers whith a space : ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is greater than %d ",a,b);

    }
    else{
        printf("%d is greater than %d ",b,a);
    }
    getchar();
    return 0;
}