#include <stdio.h>

int main() {
    int n,i=0,x, len,y = 0,j;
    char str[16][10] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    char ptr[101][101];
    scanf("%d", &n);
    while(n--) {
        scanf("%s",ptr[i++]);
    }
    n = i;
    for(i = 1; i < 10; i++) {
        x = 16 * i;
        if(n < x) {
            len = i;
            break;
        }
    }

    for(i = 0; i < len; i++) {
        for(j = 0; j < 16; j++) {
            if(y >= n) y = 0;
            printf("%s: %s\n",ptr[y++], str[j]);
        }
    }

    return 0;
}
