#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("enter the length of the 1st array");
    scanf("%d",&a);
    printf("enter the length of the 2nd array ");
    scanf("%d",&c);
    printf("\n");
    int arr1[a];
    for (int i = 0; i < a; i++)
    {
        printf("enter the value of 1st array : ");
        scanf("%d",&b);
        arr1[i]=b;
    }
    printf("\n");
    int arr2[c];
    for(int j=0;j<c; j++){
        printf("enter the value of 2nd array : ");
        scanf("%d",&d);
        arr2[j]=d;       
    }
    int arr3[a+c];
    for(int v=0; v<a;v++){
        arr3[v]=arr1[v];
    }
    for (int u=0; u<b; u++){
        arr3[u+a]=arr2[u];
    } 
    int x=0;
    while(x!=a+c){
        printf("The merged array is %d ",arr3[x]);
        x=x+1;
    }   
}