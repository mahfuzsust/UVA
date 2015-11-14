#include <stdio.h>
int getIntVal(int n) {
    if (n <= 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    int a = (n / 3) + (n % 3);
    return (n / 3) + getIntVal(a);
}

int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) && n) {
        printf("%d\n",getIntVal(n));
    }
    return 0;
}