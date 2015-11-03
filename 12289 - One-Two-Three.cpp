#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[6];
    scanf("%d", &n);
    while(n--) {
        scanf("%s", str);
        int len = strlen(str);
        if (len == 3) {
            if (str[0] == 't') {
                if (str[1] == 'n' && str[2] == 'e') {
                    printf("1\n");
                }
                else
                printf("2\n");
            }
            else if (str[0] == 'o') {
                if (str[1] == 'w' && str[2] == 'o') {
                    printf("2\n");
                }
                else
                printf("1\n");
            }
            else {
                if (str[1] == 'n') {
                    printf("1\n");
                }
                else {
                    printf("2\n");
                }
            }
        }
        else if (len == 5) {
            printf("3\n");
        }
    }
    return 0;
}
