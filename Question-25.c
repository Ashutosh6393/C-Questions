#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the size of the array: ");
    scanf("%d",&a);
    int arry[a];
    for (int i=0;i<a; i++){
        printf("Enter the element : ");
        scanf("%d",&b);
        arry[i]=b;
    }
    int larg=0;
    for (int j = 0; j< a; j++)
    {
        if (arry[j]>larg){
            larg=arry[j];
        }
               
    }
    printf("The largest number is : %d",larg);
}