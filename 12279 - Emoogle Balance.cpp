#include <stdio.h>
#include <string.h>

int main() {
    int n, counter = 1, sum, a;
    while(scanf("%d", &n) && n) {
        sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            if (a) sum++;
            else sum--;
        }
        printf("Case %d: %d\n", counter++, sum);
    }
    return 0;
}
