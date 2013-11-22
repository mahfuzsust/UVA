#include<stdio.h>

int jo(int n)
{
    bool flag[500002];
    int i,j;
    for(i=1;i<=n/2;i++)
    {
        if(flag[i]==0)
        {
            for(j=1;j<=n;)
            {
                if(flag[j]==0)
                {
                    j+=2;
                    flag[j]=1;
                }
                else j=j-1;
            }
        }
    }
    return i;
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",jo(n));
    }
    return 0;
}
