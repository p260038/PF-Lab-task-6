#include<stdio.h> 
int main() 
{
    int num=2;
    for(int pn=0;pn<4;)
        {
            int sum=0;
            for(int i=1;i<num;i++)
                {
                    if(num%i==0)
                    {
                        sum=sum+i;
                    }
                }
            if(sum==num)
            {
                printf("%d is a perfect number\n",num);
                printf("1");
                for(int i=2;i<num;i++)
                    {
                        if(num%i==0)
                        {
                            printf("+%d",i);
                        }
                    }
                printf("=%d\n",num);
                pn++;
            }
            num++;   
        }
 return 0 ; 
}