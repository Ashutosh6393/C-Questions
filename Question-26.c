#include<stdio.h>
void main(){
    int a, ar=10;

    printf("Enter a number to search : ");
    scanf("%d",&a);
    int arr[]={23,5,6,27,85,12,53,96,34,63};

    for(int i=0; i<ar; i++){
        if(arr[i]==a) 
        {
            printf("Found on the index %d",i);
            ar=11;
            break;
        }
        
    }
    if(ar==10) printf("Not found");
    

}