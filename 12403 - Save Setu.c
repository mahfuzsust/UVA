#include <stdio.h>
int main() {
    int sum = 0, n, a;
    char str[100];
    scanf("%d", &n);
    while(n--) {
        scanf("%s", str);
        if(str[0] == 'r'){
            printf("%d\n",sum);
        }
        else {
            scanf("%d", &a);
            sum += a;
        }
    }
    return 0;
}
