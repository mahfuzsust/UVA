#include <stdio.h>
#include <string.h>
int flag[505];
int main() {
    int m, n, a, i, j;
    while(scanf("%d %d", &m, &n) != EOF) {
        memset(flag, 0, sizeof(flag));
        int max = 0, ct = 0;
        for(i = 0; i < n; i++) {
            for(j = 0; j < m; j++) {
                scanf("%d", &a);
                flag[j] += a;
                if(flag[j] >= max) {
                    max = flag[j];
                    ct = j;
                }
            }
        }
        printf("%d\n", ct + 1);
    }
    return 0;
}
