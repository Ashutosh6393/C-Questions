//to check the character is vowel or not 
#include<stdio.h>
void main(){
    char a[10]={'a','e','i','o','u','A','E','I','O','U'};
    char b;
    printf("\nEnter a character : ");
    scanf("%c",&b);
    for (int i = 0; i < 10; i++)
    {
        if (b==a[i])
        {
            printf("%c is a vowel",b);
            break;

        }
        else{
            if (i==9)
            {
                printf("%c is not a vowel",b);
            }
            else continue;
            
        }
        
    }
    
}