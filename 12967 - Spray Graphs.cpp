#include <stdio.h>
#include <math.h>>

int main() {
    int m,n,i,flag[31];
    flag[1] = 1;
    flag[2] = 4;
    for(i = 3; i < 31; i++) {
        flag[i] = flag[i-1] + pow(2, i);
    }

    scanf("%d",&m);
    while(m--) {
        scanf("%d",&n);
        printf("%d\n",flag[n]);
    }
    return 0;
}
