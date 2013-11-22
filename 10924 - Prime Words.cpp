#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long a,b,p,sum,i,t;
    char str[21];

    while(scanf("%s",str))
    {
        sum=0;
        p=strlen(str);

        for(i=0;i<p;i++)
        {
            if(str[i]<97) a=str[i]-38;
            else a=str[i]-96;
            sum=sum+a;
        }

        if(sum%2==0)
        {
            if(sum==2) printf("It is a prime word.\n");
            else printf("It is not a prime word.\n");
        }

        else
        {
            t=0;

            for(i=3;i<=sqrt(sum);i+=2)
            {

                if(sum%i==0)
                {
                    t++;
                    break;
                }
            }

            if(t==0) printf("It is a prime word.\n");
            else printf("It is not a prime word.\n");
        }
    }

    return 0;
}
