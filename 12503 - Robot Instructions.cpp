#include <stdio.h>
#include <string.h>

int flag[105];
int main() {
    int m, n, counter, s, a;
    char str[101], xx[100], yy[100];
    scanf("%d", &m);
    memset(flag, 0, sizeof(flag));
    while(m--) {
        scanf("%d ", &n);
        s = n;
        counter = 1;
        int position = 0;
        while(s--) {
            gets(str);
            if(!strcmp(str, "LEFT")) {
                flag[counter] = -1;
                position -= 1;
            }
            else if(!strcmp(str, "RIGHT")) {
                flag[counter] = 1;
                position += 1;
            }
            else {
                sscanf(str, "%s %s %d",xx, yy, &a);
                flag[counter] = flag[a];
                position += flag[a];
            }
            counter++;
            memset(str, 0, sizeof(str));
        }

        printf("%d\n", position);
        memset(flag, 0, sizeof(flag));
    }
}
