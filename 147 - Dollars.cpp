#include<stdio.h>
#define mx 30002
long long dp[mx];
int coin[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
void CoinChange()
{
	int i,j;
	dp[0]=1;
	for(i=0;i<11;i++)
		for(j=coin[i];j<=mx;j++)
			dp[j]+=dp[j-coin[i]];
}
int main()
{
	CoinChange();
    long long n;
    double cents;
	while(scanf("%lf",&cents)==1 && cents)
	{
	    n=(cents+0.005)*100;
	    printf("%6.2lf%17lld\n",cents,dp[n]);
	}
	return 0;
}
