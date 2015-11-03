#include<stdio.h>
int main()
{
    long long a,b,p,q,t,i;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0&&b==0) break;
        t=0;
        for(i=1;i<11;i++)
        {
            if(a==0||b==0) break;
            p=a%10;
            a=a/10;
            q=b%10;
            b=b/10;
            if(p+q>9) t++;
        }
        if(t==0) printf("No carry operation.\n");
        else printf("%lld carry operations.\n",t);
    }
    return 0;
}
