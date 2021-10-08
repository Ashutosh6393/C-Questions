// Input temperature in fahrenheit and convert it into celsius
#include<stdio.h>
int main(){
    float far, cel;
    printf("\nEnter temperature in fahrenheit : ");
    scanf("%f",&far);
    cel=((far-32.0)*5)/9;
    printf("The temperature in celsius is %.2f",cel);    
    return 0;


}