#include<stdio.h>

int main()
{
    int i,j,n;
    do
    {
        scanf("%d",&n);
    } while(n%2==0 || n<=1 || n>30);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i || j==(n+1)-i)
            {
                printf("%d",i%10);
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