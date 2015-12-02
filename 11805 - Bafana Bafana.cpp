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
int main(int argc, const char * argv[]) {
    int n, a, ct = 1, k, p, t;
    scanf("%d",&t);
    while (t--) {
        scanf("%d %d %d",&n, &k, &p);
        p = p % n;
        a = n - k;
        if (p > a) {
            //a += p - a;
            printf("Case %d: %d\n", ct++, p - a);
        }
        else {
            printf("Case %d: %d\n", ct++, k + p);
        }
    }
    return 0;
}