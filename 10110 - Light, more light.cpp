#include <stdio.h>
#include <math.h>
int main()
{
    long long n,i,p,a;
    //freopen("a.txt","r",stdin);
    while(scanf("%lld",&n)==1 && n)
    {
        p=(int)sqrt(n);
        if(p*p==n) a=1;
        else a=0;
        if(a==1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

//2 32 = 4294967296
// 65536
