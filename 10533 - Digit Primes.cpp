#include<stdio.h>

#define sz 1000001
#define max 78500

bool flag[sz];
int prime[max],c=0;

void sieve()
{
    int i,j;
    for(i=0;i<sz;i++) flag[i]=1;
    flag[0]=0;
    flag[1]=0;
    for(i=2;i<sz;i++)
    {
        if(flag[i]==1) prime[c++]=i;
        for(j=i+i;j<sz;j+=i) flag[j]=0;
    }
}

int rev(int n)
{
    int i,p,m=0;
    for(i=0;i<8;i++)
    {
        if(!n) break;
        p=n%10;
        n=n/10;
        m+=p;
    }
    return m;
}

int src(int n)
{
    int l,beg=0,end=c,mid=(beg+end)/2;
    while(beg<=end)
    {
        if(n==prime[mid])
        {
            mid=mid-1;
            break;
        }
        if(n<prime[mid]) end=mid-1;
        else beg=mid+1;
        mid=(beg+end)/2;
    }

    return mid+1;
}

int main()
{
    int i,n,t,a,q,r,b,p,temp;
    sieve();
    scanf("%d",&n);
    while(n--)
    {
        t=0;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        q=src(a);
        for(i=q;prime[i]<=b;i++)
        {
            p=rev(prime[i]);
            if(flag[p]==1) t++;
        }
        printf("%d\n",t);
    }
    return 0;
}
