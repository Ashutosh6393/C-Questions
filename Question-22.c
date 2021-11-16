#include<stdio.h>
void main(){
    float a, b, c, d;
    printf("Enter the marks in first subject out of 100 : ");
    scanf("%f",&a);
    printf("Enter the marks in second subject out of 100 : ");
    scanf("%f",&b);
    printf("Enter the marks in third subject out of 100 : ");
    scanf("%f",&c);
    printf("Enter the marks in fourth subject out of 100 : ");
    scanf("%f",&d);
    float avg = (a+b+c+d)/4;
    if (avg >= 95) printf("Genius, got %.2f percentage",avg);
    else if (avg>=80 && avg<95) printf("Excellent, got %.2f percentage",avg);
    else if (avg>=65 && avg<80) printf("Average but good, got %.2f percentage",avg);
    else if (avg>=35 && avg<65) printf("Passed but Work hard, got %.2f percentage",avg);
    else printf("Failed - Need to go to previous class, got %.2f percentage",avg);   

}