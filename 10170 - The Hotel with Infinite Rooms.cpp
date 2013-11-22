#include<stdio.h>
int main()
{
    int a,b,sum,i;
    while(2==scanf("%d %d",&a,&b)){
        sum=0;
        for(i=a;i<=b;++i){
            if(sum<b) sum=sum+i;
            else break;
        }
        printf("%d\n",i-1);
    }
    return 0;
}
