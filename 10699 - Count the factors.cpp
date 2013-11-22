#include<stdio.h>
#include<math.h>
#define size 1000005
#define max 1000000
int prime[max],c=0;
bool flag[size];
void sieve()
{
    int i,j;
    prime[c++]=2;
    for(i=3;i<size;i+=2)
        if(!flag[i])
        {
            prime[c++]=i;
            for(j=i+i;j<size;j+=i) flag[j]=1;
        }
}

int main()
{
    sieve();
    int n,i,t,p;
    while(scanf("%d",&n)==1 && n)
    {
        t=1;
        p=n;
        for(i=0;prime[i]<=sqrt(n);i++)
            if(n%prime[i]==0)
            {
                t++;
                while(n%prime[i]==0) n=n/prime[i];
            }
        printf("%d : %d\n",p,t);
    }
    return 0;
}
