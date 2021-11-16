#include<stdio.h>
void main(){
    int a;
    float c;
    printf("enter the length of the array : ");
    scanf("%d",&a);
    float arr[a];
    for (int i=0; i<a;i++){
        printf("the the value of the array : ");
        scanf("%f",&c);
        arr[i]=c;
    }
    float sum=0;

    for (int j=0; j<a; j++){
        sum=sum+arr[j];
    }
    float avg=sum/a;
    printf("%d",sum);
    printf("the average of the array is : %.2f",avg);

}