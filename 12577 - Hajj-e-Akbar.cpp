#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    long m = 1;
    char str[100];
    char hajj[] = {"Hajj"};
    char umrah[] = {"Umrah"};
     scanf("%s", str);

    while(str[0] != '*') {
        if(strcmp(str, hajj) == 0) {
            printf("Case %ld: Hajj-e-Akbar\n", m++);
        }
        else if(strcmp(str, umrah) == 0) {
            printf("Case %ld: Hajj-e-Asghar\n", m++);
        }
        scanf("%s", str);
    }
    return 0;
}
