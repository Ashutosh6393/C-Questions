/* Print the pattern

1
12
123
1234

*/

#include<stdio.h>
void main(){
    int a;
    printf("\nEnter number of rows : ");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
        
    }
    
}