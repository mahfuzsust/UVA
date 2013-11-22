#include<stdio.h>
#include<math.h>
#include<string.h>

int rev(int n)
{
	int p,m=0,q;
	p= (int)(log10(n)+1);
	while(p--)
	{
		q=n%10;
		m=m*10+q;
		n=n/10;
	}
	return m;
}

int main()
{
	int m,i,u,q;
	char str[20000],c;
	while(gets(str))
	{
		u=0;
		q=strlen(str);
		for(i=q-1;i>=0;i--)
		{
			if(str[i]>=48 && str[i]<=57)
			{
				if(str[i]=='1')
				{
					m=(str[i]-'0')*100;
					if((i-1)>=0) m+=(str[i-1]-'0')*10;
					if((i-2)>=0) m+=(str[i-2]-'0');
					i=i-2;
					if(m<65||(m>=91 && m<=96)||m>122)
					{
					    if(m==32||m==33||m==44||m==46||m==58||m==59||m==63)  printf("%c",m);
					    else continue;
					}
					else printf("%c",m);
				}
				else
				{
					m=(str[i]-'0')*10;
					if((i-1)>=0) m+=(str[i-1]-'0');
					i=i-1;
					if(m<65||(m>=91 && m<=96)||m>122)
					{
					    if(m==32||m==33||m==44||m==46||m==58||m==59||m==63) printf("%c",m);
					    else continue;
					}
					else printf("%c",m);
				}
			}
			else
			{
			    m=str[i];
			    if(m==70) printf("07");
			    else if(m==80) printf("08");
			    else if(m==90) printf("09");
			    else if(m==100) printf("001");
			    else if(m==110) printf("011");
			    else if(m==120) printf("021");
			    else
			    {
			        m=rev(m);
                    printf("%d",m);
			    }
			}

		}
		printf("\n");
	}
	return 0;
}
