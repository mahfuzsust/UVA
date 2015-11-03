#include <stdio.h>
#include <string.h>

int main() {
    char str[1100];
    while(gets(str) && str[0] != '*') {
        char c = (str[0] == ' ') ? str[1] : str[0];
        char d = c > 96 ? c - 32: c + 32;
        int len = strlen(str);
        bool check = true;
        for (int i = 0; str[i]; i++) {
            if (str[i] == ' ' && i != len - 1 && (str[i+1] != c && str[i+1] != d ) ) {
                printf("N\n");
                check = false;
                break;
            }
        }
        if (check) {
            printf("Y\n");
        }
    }
    return 0;
}
