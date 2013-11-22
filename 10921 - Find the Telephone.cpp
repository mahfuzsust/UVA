#include<stdio.h>
int main()
{
    int n;
    char c;
    while(scanf("%c",&c)){
    n=c;
    if(n==65||n==66||n==67) printf("2");
    else if(n==68||n==69||n==70) printf("3");
    else if(n==71||n==72||n==73) printf("4");
    else if(n==74||n==75||n==76) printf("5");
    else if(n==77||n==78||n==79) printf("6");
    else if(n==80||n==81||n==82||n==83) printf("7");
    else if(n==84||n==85||n==86) printf("8");
    else if(n==87||n==88||n==89||n==90) printf("9");
    else if(n==145) printf("%c",c);
    else if(n==110) printf("\n");
    //else printf("1");
    //printf("%d",n);
    }
    return 0;
}
