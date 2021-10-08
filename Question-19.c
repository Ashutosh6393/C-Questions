/* Print the pattern 

*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
void main(){
    int a;
    printf("\nEnter number of rows : ");
    scanf("%d",&a);
    for (int i = 0; i<a ; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        
        for (int j = a; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}