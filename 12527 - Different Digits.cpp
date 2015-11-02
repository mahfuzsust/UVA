#include <stdio.h>
bool check(int n) {
    if(n < 11)
        return true;
    if(n % 100 == 0)
        return false;
    int a = -1, b = -1, c = -1, d = -1;

    int p = n, r;
    while(n) {
        r = n % 10;
        n = n / 10;
        if(a < 0)
            a = r;
        else if(b < 0)
            b = r;
        else if(c < 0)
            c = r;
        else if(d < 0)
            d = r;
    }
    if(p >= 1000 && (a == b || a == c || a == d || b == c || b == d || c == d))
        return false;
    if(p >= 100 && p < 1000 && (a == b || a == c || b == c))
        return false;
    if(p < 100 && a == b)
        return false;
    return true;

}
int main() {

    bool flag[5001];
    int i, counter, m, n;
    for(i = 0; i < 5001; i++) {
        flag[i] = check(i);
    }
    while(scanf("%d %d", &m, &n) != EOF) {
        counter = 0;
        for(i = m; i <= n; i++) {
            if(flag[i]) counter++;
        }
        printf("%d\n",counter);
    }
    return 0;
}
