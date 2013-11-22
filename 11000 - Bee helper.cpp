#include<stdio.h>
int main()
{
    long long n,i,male,sum;
    while(1==scanf("%lld",&n))
    {
        if(n<0) break;
        male=0;
        i=1;
        while(n--)
        {
            sum=i+male+1;
            male=i;
            i=sum;
        }
        printf("%lld %lld\n",male,sum);
    }
    return 0;
}
