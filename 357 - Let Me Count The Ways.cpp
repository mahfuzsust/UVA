#include<stdio.h>
#define mx 30002
long long dp[mx];

int coin[]={1,5,10,25,50};

void CoinChange()
{
	int i,j;
	dp[0]=1;
	for(i=0;i<5;i++)
		for(j=coin[i];j<=mx;j++)
			dp[j]+=dp[j-coin[i]];

}
int main()
{
	CoinChange();
 long long cents;
	while(scanf("%lld",&cents)==1)
	{
	    if(dp[cents]==1) printf("There is only 1 way to produce %lld cents change.\n",cents);
		else printf("There are %lld ways to produce %lld cents change.\n",dp[cents],cents);
	}
	return 0;
}
