#include <stdio.h>
#include <string.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
int main() {
    int m, n;
    char str[105], ptr[105];
    while(scanf("%s", str) && strcmp(str, "E-N-D")) {

        if( strlen(str) > strlen(ptr)) strcpy(ptr,str);
    }
    for(int i = 0; ptr[i]; i++) {

        if(!((ptr[i] >= 'A' && ptr[i] <= 'Z') || (ptr[i] >= 'a' && ptr[i] <= 'z') || ptr[i] == '-'))
                continue;

        if(ptr[i] >= 'A' && ptr[i] <= 'Z')
            ptr[i] = ptr[i] + 32;

        printf("%c",ptr[i]);
    }
    printf("\n");
    return 0;
}
