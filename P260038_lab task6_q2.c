#include <stdio.h> 
int main( ) 
{ 
int i,j;
char symbol;   
printf("Enter a symbol: ");
scanf("%c",&symbol);
 printf("\n");
for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            {
            printf("%c",symbol);
            } 
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(j=4;j>=i;j--)
            {
                printf("%c",symbol);
            } 
        printf("\n");
    }
   
 return 0 ; 
}