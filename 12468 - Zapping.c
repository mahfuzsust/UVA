#include <stdio.h>
#define MIN(a,b) ((a < b) ? a : b)
int main() {
    int m, n;
    while(scanf("%d %d", &m, &n) && m > -1 && n > -1) {
        if(n > m)
            printf("%d\n",MIN(m + 100 - n, n - m));
        else
            printf("%d\n",MIN(n + 100 - m, m - n));
    }
    return 0;
}
