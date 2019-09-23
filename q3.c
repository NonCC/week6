#include<stdio.h>

int main()
{
    int n,i,j;
    do
    {
        scanf("%d",&n);
    } while(n%2==0 || n>30 || n<1);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
             printf("1");         
            }
            else if(j+i==n)
            {
            printf("1"); 
            }
            else
            {
             printf("-");   
            }
        }
        printf("\n");
    }
    return 0;
}