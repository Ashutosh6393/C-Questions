/* Print the pattern

*
**
***
****
*****

*/

#include<stdio.h>
void main(){
    int a;
    printf("\nEnter the number of rows : ");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
    printf("\n");
    }
    
}