#include<stdio.h>
int main()
{
    long int n,i,p,q;
    while(scanf("%ld",&n)==1)
    {
        q=0;
        if(n==0) break;
        p=n;
        if(n<101)
            while(n<101)
            {
                n=n+11;
                q=n;
            }
        if(n>100) n=n-10;
        printf("%ld",n);
    }
    return 0;
}
