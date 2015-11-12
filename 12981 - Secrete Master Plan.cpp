//
//  main.c
//  UvaSolutions
//
//  Created by Mahfuzur Rahman on 10/4/15.
//  Copyright (c) 2015 Mahfuzur Rahman. All rights reserved.
//

#include <stdio.h>

int main() {
    int t, counter = 1, a, b, c, d, e, f, g, h;
    
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
        
        if ( (a == e && b == f && d == h && c == g) || (a == f && b == h && d == g && c == e) ||
                 (a == h && b == g && d == e && c == f) || (a == g && b == e && d == f  && c == h)) {
            printf("Case #%d: POSSIBLE\n", counter);
            
        }
        else {
            printf("Case #%d: IMPOSSIBLE\n", counter);
        }
        counter++;
    }
    return 0;
}