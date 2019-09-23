#include<stdio.h>

int main()
{
 int n,j,i,s=0;
    do
    {
        scanf("%d",&n);
    } 
    while(n<2 || n>999);

    for(i=2;i<=n;i++)
    {
        s=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                s++;
            }
        }
        if(s==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}