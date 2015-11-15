#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    
    int n;
    char str[33];
    while (scanf("%d", &n) && n) {
        memset(str, '\0', sizeof(str));
        int i = 0, p, ans = 0;
        while (n) {
            p = (n % 2);
            ans += p;
            str[i++] = p + '0';
            n /= 2;
        }
        int len = strlen(str);
        int j = len - 1;
        len /= 2;
        
        //snprintf(str,sizeof(str), "%d", bin);
        for (int i = 0; i < len; i++, j--) {
            char c = str[i];
            str[i] = str[j];
            str[j] = c;
        }
        printf("The parity of %s is %d (mod 2).\n", str, ans);
    }
    
    return 0;
}