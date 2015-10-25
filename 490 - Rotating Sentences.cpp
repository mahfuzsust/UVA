#include <stdio.h>
#include <string.h>

int main() {
    char ptr[105][105];

    int i = 0, n = 0, j;
    while(gets(ptr[i])) {
//        if(strlen(ptr[i]) == 0)
//            break;
        int len = strlen(ptr[i++]);
        if(n < len)
            n = len;
    }
    int num = i;

    for(i = 0; i < n; i++) {
        int tt = 0;
        for(j = num - 1; j >= 0; j--) {
            if(strlen(ptr[j]) > i) {
                 printf("%c", ptr[j][i]);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
