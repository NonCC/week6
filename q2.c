#include<stdio.h>

int main()
{
    int b,c,i,j,n,k=1;
    do
    {
        scanf("%d",&n);
    } while(n<=1 || n>9);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d ",k);
        }
        k++;
        printf("\n");
    }
    b=n;
    c=k-2;
    for(i=1;i<n;i++)
    {

        for(j=1;j<b;j++)
        {
            printf("%d ",c);
        }
        b--;
        c--;
        printf("\n");
    }
return 0;
}