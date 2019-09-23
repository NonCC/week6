#include<stdio.h>

int main()
{
    int i,j,n,b,num=11;
    do
    {
        scanf("%d",&n);
    } while(n<=1 || n>9);
    b=n;
    num *=n;
    for(i=1;i<=n;i++)
    {

        for(j=0;j<b;j++)
        {
            printf("%d ",num-j);
        }
        b--;
        num-=11;
        printf("\n");
    }
return 0;
}