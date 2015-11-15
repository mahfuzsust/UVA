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
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int  y, i, counter = 0;
    char str[50];
    while(scanf("%s", str)!= EOF) {
        int len = strlen(str);
        int ans = 0, t = 0, val = 0, x = 0;
        for (i = len - 1; i >= 0; i--) {
            if (str[i] == '?') break;
            else if (str[i] == '=') {
                ans = x;
                t = 0;
                x = 0;
            }
            else if (str[i] == '+' || str[i] == '-') {
                val = (str[i] == '+') ? 1 : 2;
                y = x;
                t = 0;
                x = 0;
            }
            else x += (str[i] - '0') * pow(10, t++) ;
        }
        if ((val == 1 && x + y == ans) || (val == 2 && x - y == ans)) {
            counter++;
        }
    }
    printf("%d\n", counter);
    
    return 0;
}