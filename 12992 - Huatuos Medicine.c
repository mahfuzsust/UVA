#include <stdio.h>

int main() {
    int counter = 1, t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        printf("Case #%d: %d\n",counter++, n + n - 1);
    }
    return 0;
}

