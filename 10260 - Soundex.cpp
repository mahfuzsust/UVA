#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,p,q,r,s,t,u,w;
    while(scanf("%s",str)==1)
    {
        p=q=r=s=t=u=w=0;
        for(i=0;str[i];i++)
        {
            if(str[i]=='B' || str[i]=='F' || str[i]=='P' || str[i]=='V')
            {
                if(p==0) printf("1");
                p=1;
                q=r=s=t=u=w=0;
            }
            else if((str[i]=='C' || str[i]=='G' ||str[i]=='J' || str[i]=='K' || str[i]=='Q' || str[i]=='S' ||str[i]=='X' || str[i]=='Z'))
            {
                if(q==0) printf("2");
                q=1;
                p=r=s=t=u=w=0;
            }
            else if((str[i]=='D' || str[i]=='T'))
            {
                if(r==0) printf("3");
                r=1;
                p=q=s=t=u=w=0;
            }
            else if((str[i]=='L'))
            {
                if(s==0) printf("4");
                s=1;
                p=q=r=t=u=w=0;
            }
            else if((str[i]=='M' || str[i]=='N'))
            {
                if(t==0) printf("5");
                t=1;
                p=q=r=s=u=w=0;
            }
            else if((str[i]=='R'))
            {
                if(u==0) printf("6");
                u=1;
                p=q=r=s=t=w=0;
            }
            else
            {
                p=q=r=s=t=u=w=0;
            }
        }
        printf("\n");
    }
    return 0;
}
