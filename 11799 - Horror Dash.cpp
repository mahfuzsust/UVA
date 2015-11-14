#include <stdio.h>
int main(int argc, const char * argv[]) {
    int n, ct = 1,m, ans = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        ans = 0;
        int a;
        for (int i = 0; i < m; i++) {
            scanf("%d", &a);
            if (ans < a) {
                ans = a;
            }
        }
        printf("Case %d: %d\n", ct++, ans);
    }
    return 0;
}