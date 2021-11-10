#include<stdio.h>
void main(){
    int a=50;
    while(a>1){
        if (a%2!=0) printf("%d ", a);
        a=a-1;
    }
}