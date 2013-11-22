#include<stdio.h>
int func(int n){
    int p=0;
    if(n%10>0) return n%10;
    p=p+func(n);
    return p;
}
int main()
{
    int n,p;
    scanf("%d",&n);
    p=func(n);
    printf("%d",n);
    return 0;
}
