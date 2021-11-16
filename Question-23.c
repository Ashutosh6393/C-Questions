#include<stdio.h>
void main(){
    float a, b, c;
    printf("Enter three numbers : ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if (a>c || b>c){
        if (a>b)
        {
            printf("\n%.1f is largest",a);
        }
        else printf("\n%.1f is largest",b);
        
    }
    else printf("\n%.1f is largest ",c);

}