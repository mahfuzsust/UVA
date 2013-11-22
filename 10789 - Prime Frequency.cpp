#include<stdio.h>
bool flag[2005];
void sieve()
{
    int i,j;
    flag[1]=1;
    flag[0]=1;
    for(i=2;i<2005;i++) if(!flag[i])for(j=i+i;j<2005;j+=i) flag[j]=1;
}
int main()
{
    sieve();
    int letters[130],i,j,n,p,k=1,cnt;
    char str[2005];
    scanf("%d",&n);
    while(n--)
    {
        cnt=0;
        for(i=0;i<130;i++) letters[i]=0;
        scanf("%s",str);
        for(i=0;str[i];i++)if((str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='z'))letters[str[i]]++;
        printf("Case %d: ",k++);
        for(i=0;i<130;i++) if(!flag[letters[i]]) printf("%c",i),cnt++;
        if(!cnt) printf("empty");
        printf("\n");
    }
    return 0;
}
