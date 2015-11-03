#include <stdio.h>
#include <string.h>

int main() {
    double a, b;
    char c, str[1000];
    int inf = 2147483647;
    while(gets(str)) {
        puts(str);
        sscanf(str, "%lf %c %lf", &a, &c, &b);
        bool first = false, last = false;
        if(a > inf) { printf("first number too big\n"); first = true; }
        if(b > inf) { printf("second number too big\n"); last = true; }

        if((first && last) || (c == '+' && ( (first && b > 0) || (last && a > 0) || (a + b) > inf)) || (c == '*' && ((first && b > 1) || (last && a > 1) || (a * b) > inf))) printf("result too big\n");
    }
    return 0;
}
