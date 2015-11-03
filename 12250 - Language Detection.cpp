#include <stdio.h>
#include <string.h>

int main() {
    int counter = 1;
    char str[15];
    while(scanf("%s", str) && str[0] != '#') {
        if (!strcmp(str, "HELLO") ) {
            printf("Case %d: ENGLISH\n", counter++);
        }
        else if (!strcmp(str, "HOLA") ) {
            printf("Case %d: SPANISH\n", counter++);
        }
        else if (!strcmp(str, "HALLO") ) {
            printf("Case %d: GERMAN\n", counter++);
        }
        else if (!strcmp(str, "BONJOUR") ) {
            printf("Case %d: FRENCH\n", counter++);
        }
        else if (!strcmp(str, "CIAO") ) {
            printf("Case %d: ITALIAN\n", counter++);
        }
        else if (!strcmp(str, "ZDRAVSTVUJTE") ) {
            printf("Case %d: RUSSIAN\n", counter++);
        }
        else {
            printf("Case %d: UNKNOWN\n", counter++);
        }
    }
    return 0;
}
