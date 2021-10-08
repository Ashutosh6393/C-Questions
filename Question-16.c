//Generate a fibonacci series 
#include<stdio.h>
void main (){
    int a,x=0,y=1,z;
    printf("\nEnter the range of series : ");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        printf("%d, ",x);
        z=x+y;
        x=y;
        y=z;
       
    }
    
}