#include<stdio.h>

int main()
{
    int i,j,n,num=11;
    do
    {
        scanf("%d",&n);
    } while(n<=1 || n>9);
    for(i=1;i<=n;i++)
    {

        for(j=0;j<i;j++)
        {
            printf("%d ",num+j);
        }
        num+=10;
        printf("\n");
    }
return 0;
}