#include <stdio.h>

int main() {
    int m, n;
    bool first = true;
    while(scanf("%d %d",&m,&n) != EOF) {
        
        if(!first) printf("\n");
        if(m > n) {
            for(int i = n + 1; i <= m + 1; i++) printf("%d\n", i);
        }
        else if(n > m) {
            for(int i = m + 1; i <= n + 1; i++) printf("%d\n", i);
        }
        else printf("%d\n", n + 1);
        
        first = false;
        
    }
    return 0;
    
}