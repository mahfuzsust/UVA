#include <stdio.h>
#include <string.h>
int main() {
    int n, a, b, pt, counter, ct = 1;
    char str[105], ptr[105][105];
    scanf("%d", &n);
    while(n--) {
        a = 10;
        counter = 0;
        while(a--) {
            scanf("%s %d", str, &b);
            if(b > counter) {
                pt = 0;
                strcpy(ptr[pt++], str);
                counter = b;
            }
            else if(b == counter) {
                strcpy(ptr[pt++], str);
            }
        }
        printf("Case #%d:\n", ct++);
        for(int i = 0; i < pt; i++) {
            printf("%s\n",ptr[i]);
        }

    }
    return 0;
}
