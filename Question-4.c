// Input the side of square and print the area
#include<stdio.h>
int main(){
    float len;
    printf("Enter length of side of the square : ");
    scanf("%f",&len);
    printf("The area of the square is %.2f: ",len*len);
    getchar();
    return 0;
}