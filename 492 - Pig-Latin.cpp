#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[1000000],k;
    int vowel,con,i,t;
    while(gets(str))
    {
        con=vowel=0;
        t=1;
      for(i=0;str[i]!='\0';i++)
        {
            if(isalpha(str[i]))
            {
                if(t==1 && vowel==0 && con==0)
                {
                  if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                       vowel=1;

                   else
                       {
                           k=str[i];
                           con=1;
                           continue;
                       }
                }
                printf("%c",str[i]);
                t++;
            }
            else
            {
                if(vowel==1) printf("ay");
                else if(con==1) printf("%cay",k);
                printf("%c",str[i]);
                t=1;
                con=0;
                vowel=0;
            }
        }
        if(con==1) printf("%cay",k);
        else if(vowel==1) printf("ay");
        printf("\n");
    }
    return 0;
}
