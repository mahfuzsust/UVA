
/*Method: Greedy*/
/*Algo: Coin Change*/
/*Author: Mahfuz*/
/*UVA: 674*/
#include<stdio.h>
#define mx 7490
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
		printf("%lld\n",dp[cents]);
	}
	return 0;
}

/*End of Source Code*/
