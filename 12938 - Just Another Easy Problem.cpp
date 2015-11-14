//
//  main.c
//  UvaSolutions
//
//  Created by Mahfuzur Rahman on 10/4/15.
//  Copyright (c) 2015 Mahfuzur Rahman. All rights reserved.
//

/*
 * Get circular index of n item with current index.
 * The difference is given in positive if forward else negative
 */
#include <stdio.h>
#include <string.h>


int getIntVal(char a, char b, char c, char d) {
    return ((a - '0') * 1000) + ((b - '0') * 100) + ((c - '0') * 10) + (d - '0');
}

bool isNotExist(int st[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (st[i] == x) {
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {   
    int t, p = 0, a, st[100];
    bool flag[10005];
    char str[10];
    
    memset(flag, false, sizeof(flag));
    
    for (int i = 32; i < 100; i++) {
        p = i * i;
        flag[p] = true;
    }
    p = 1;
    scanf("%d ", &t);
    while (t--) {
        scanf("%s", str);
        int counter = 0, xx = 0;
        memset(st, 0, sizeof(st));
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 10; j++) {
                if ((i == 0 && j == 0) || ((str[i] - '0') == j )) {
                    continue;
                }
                
                if (i == 0) {
                    a = getIntVal((j + '0'), str[1], str[2], str[3]);
                    if (flag[a] && isNotExist(st, counter, a)) {
                        st[xx++] = a;
                        counter++;
                    }
                }
                else if (i == 1) {
                    a = getIntVal(str[0], (j + '0'), str[2], str[3]);
                    if (flag[a] && isNotExist(st, counter, a)) {
                        counter++;
                        st[xx++] = a;
                    }
                }
                else if (i == 2) {
                    a = getIntVal(str[0], str[1], (j + '0'), str[3]);
                    if (flag[a] && isNotExist(st, counter, a)) {
                        counter++;
                        st[xx++] = a;
                    }
                }
                else if (i == 3) {
                    a = getIntVal(str[0], str[1], str[2], (j + '0'));
                    if (flag[a] && isNotExist(st, counter, a)) {
                        counter++;
                        st[xx++] = a;
                    }
                }
            }
            
        }
        printf("Case %d: %d\n",p++, counter);
    }
    
    
    return 0;
}