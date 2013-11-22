#include <stdio.h>
#include <string.h>

char str[100000000];
int main()
{
    int s,i,j,k;

    while(scanf("%d",&s))
    {
        scanf("%s",str);

        if(s==0 && str[0]=='0') break;

        for(j=0;str[j];j++)
        {
            if(j!=0) printf(" ");
            printf(" ");
            if(str[j]=='1' || str[j]=='4')
            {
                for(k=0;k<s;k++) printf(" ");
            }
            else for(k=0;k<s;k++) printf("-");
            printf(" ");
        }
        printf("\n");

        for(i=0;i<s;i++)
        {
            for(j=0;str[j];j++)
            {
                if(j!=0) printf(" ");
                    if(str[j]=='1')
                    {
                        printf(" ");
                        for(k=0;k<s;k++) printf(" ");
                        printf("|");
                    }
                    if(str[j]=='2')
                    {
                        printf(" ");
                        for(k=0;k<s;k++) printf(" ");
                        printf("|");
                    }
                    if(str[j]=='3')
                    {
                        printf(" ");
                        for(k=0;k<s;k++) printf(" ");
                        printf("|");
                    }
                    if(str[j]=='4')
                    {
                        printf("|");
                        for(k=0;k<s;k++) printf(" ");
                        printf("|");
                    }
                    if(str[j]=='5')
                    {
                        printf("|");
                        for(k=0;k<s;k++) printf(" ");
                        printf(" ");
                    }
                    if(str[j]=='6')
                    {
                        printf("|");
                        for(k=0;k<s;k++) printf(" ");
                        printf(" ");
                    }
                    if(str[j]=='7')
                    {
                        printf(" ");
                        for(k=0;k<s;k++) printf(" ");
                        printf("|");
                    }
                    if(str[j]=='8')
                    {
                        printf("|");
                        for(k=0;k<s;k++) printf(" ");
                        printf("|");
                    }
                    if(str[j]=='9')
                    {
                        printf("|");
                        for(k=0;k<s;k++) printf(" ");
                        printf("|");
                    }
                    if(str[j]=='0')
                    {
                        printf("|");
                        for(k=0;k<s;k++) printf(" ");
                        printf("|");
                    }

            }
            printf("\n");
        }


        for(j=0;str[j];j++)
        {
            if(j!=0) printf(" ");
            printf(" ");
            if(str[j]=='1' || str[j]=='7' || str[j]=='0')
            {
                for(k=0;k<s;k++) printf(" ");
            }
            else for(k=0;k<s;k++) printf("-");
            printf(" ");
        }

        printf("\n");

        for(i=0;i<s;i++)
        {
            for(j=0;str[j];j++)
            {
                if(j!=0) printf(" ");
                if(str[j]=='1')
                {
                    printf(" ");
                    for(k=0;k<s;k++) printf(" ");
                    printf("|");
                }
                if(str[j]=='2')
                {
                    printf("|");
                    for(k=0;k<s;k++) printf(" ");
                    printf(" ");
                }
                if(str[j]=='3')
                {
                    printf(" ");
                    for(k=0;k<s;k++) printf(" ");
                    printf("|");
                }
                if(str[j]=='4')
                {
                    printf(" ");
                    for(k=0;k<s;k++) printf(" ");
                    printf("|");
                }
                if(str[j]=='5')
                {
                    printf(" ");
                    for(k=0;k<s;k++) printf(" ");
                    printf("|");
                }
                if(str[j]=='6')
                {
                    printf("|");
                    for(k=0;k<s;k++) printf(" ");
                    printf("|");
                }
                if(str[j]=='7')
                {
                    printf(" ");
                    for(k=0;k<s;k++) printf(" ");
                    printf("|");
                }
                if(str[j]=='8')
                {
                    printf("|");
                    for(k=0;k<s;k++) printf(" ");
                    printf("|");
                }
                if(str[j]=='9')
                {
                    printf(" ");
                    for(k=0;k<s;k++) printf(" ");
                    printf("|");
                }
                if(str[j]=='0')
                {
                    printf("|");
                    for(k=0;k<s;k++) printf(" ");
                    printf("|");
                }

            }
            printf("\n");
        }

        for(j=0;str[j];j++)
        {
            if(j!=0) printf(" ");
            printf(" ");
            if(str[j]=='1' || str[j]=='4' || str[j]=='7')
            {
                for(k=0;k<s;k++) printf(" ");
            }
            else for(k=0;k<s;k++) printf("-");
            printf(" ");
        }

        printf("\n\n");

    }
    return 0;
}

