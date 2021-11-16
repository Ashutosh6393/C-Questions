#include<stdio.h>
void main(){
    float a, b;
    int c;
    printf("Enter 1st number : ");
    scanf("%f",&a);
    printf("Enter 2nd number : ");
    scanf("%f",&b);
    printf("Options : ");
    printf("\n1- Add");
    printf("\n2- Subtract");
    printf("\n3- Multiply");
    printf("\n4- Divide");
    printf("\n5- Quit");
    printf("\nEnter your choice : ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("\n%.2f + %.2f = %.2f",a,b,a+b);
        break;
    case 2:
        printf("\n%.2f - %.2f = %.2f",a,b,a-b);
        break;
    case 3:
        printf("\n%.2f * %.2f = %.2f",a,b,a*b);
        break;
    case 4:
        if (b==0) printf("Cannot divide by zero");
        else printf("\n%.2f / %.2f = %.2f",a,b,a/b);        
        break;
    case 5:
    printf("\n--Ended--");       
        break;     
    default:
        printf("Invalid Choice");       
    }
}