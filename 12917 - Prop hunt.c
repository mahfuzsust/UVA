#include <stdio.h>

int main() {
    int a,b,c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF) {
        if((c - a) < b) printf("Hunters win!\n");
        else printf("Props win!\n");
    }
    return 0;
}
