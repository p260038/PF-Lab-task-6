#include <stdio.h> 
int main( ) 
{
    int n,x;
    float s=0;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    printf("Enter the value for x: ");
    scanf("%d",&x);
    int i,k;
    for(i=0;i<=n;i++)
        {
            float power=1,fac=1;
            for(k=0;k<i;k++)
                { power=power*x;}
            for(int j=1;j<=i;j++)
                { fac=fac*j;}
            s=s+(power/fac);
        }
    printf("%.1f",s);
 return 0 ; 
}