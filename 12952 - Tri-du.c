#include <stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
int main() {
    int m, n;
    while(scanf("%d %d", &m, &n) != EOF) {
        if(m == n) printf("%d\n",m);
        else printf("%d\n",MAX(m,n));
    }
    return 0;
}

