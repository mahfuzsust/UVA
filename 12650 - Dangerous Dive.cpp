#include <stdio.h>
#include <string.h>

bool flag[10005];
int main() {
    int i, n, m, a;
    while(scanf("%d %d", &n, &m) != EOF) {
        i = m;
        while(i--) {
            scanf("%d", &a);
            flag[a] = true;
        }
        if(m == n) {
            printf("*\n");
        }
        else {

        for(i = 1; i <= n; i++)
            if(!flag[i]) printf("%d ", i);

        printf("\n");
        }
        memset(flag, false, sizeof(flag));
    }
    return 0;
}

