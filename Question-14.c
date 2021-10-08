// Display the reverse of a number
#include<stdio.h>
void main(){
    int a,b=0,x,y=10;              
    printf("\nEnter a number : ");
    scanf("%d",&a);
    while (a>0)
    {        
        x=a%10;                    
        b=x+(b*y);                                                                      
        a=a/10;                   
    }
    printf("\nThe reverse of a number is : %d",b);
    
}