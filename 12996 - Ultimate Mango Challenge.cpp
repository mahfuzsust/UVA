//
//  main.c
//  UvaSolutions
//
//  Created by Mahfuzur Rahman on 10/4/15.
//  Copyright (c) 2015 Mahfuzur Rahman. All rights reserved.
//

#include <stdio.h>

int main() {
    int nn, l, t, counter = 1, aa[12], bb[12];
    
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &nn, &l);
        int sum = 0, p;
        for (int i = 0; i < nn; i++) {
            scanf("%d", &p);
            sum += p;
            aa[i] = p;
        }
        for (int i = 0; i < nn; i++) {
            scanf("%d", &bb[i]);
        }
        p = 0;
        
        if (sum <= l) {
            p = 1;
            for (int i = 0; i < nn; i++) {
                if (bb[i] < aa[i]) {
                    p = 0;
                    break;
                }
            }
        }
        if (p == 1) {
            printf("Case %d: Yes\n", counter);
        }
        else {
            printf("Case %d: No\n", counter);
        }
        counter++;
    }
    return 0;
}