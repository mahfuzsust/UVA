#include<stdio.h>
#define max 10005

long long dp[max];

void coinchange()
{
    int c=0,i,j,coin[21];
    coin[c++]=1;
    dp[0]=1;

    for(i=1;i<max;i++) dp[i]=0;

    for(i=2;i<22;i++) coin[c++]=i*i*i;

    for(i=0;i<c;i++) for(j=coin[i];j<max;j++) dp[j]+=dp[j-coin[i]];
}

int main()
{
    coinchange();

    int n;

    while(scanf("%d",&n)==1)
    {
        printf("%lld\n",dp[n]);
    }

    return 0;
}
