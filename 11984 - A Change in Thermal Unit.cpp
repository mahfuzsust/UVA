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

int main() {
   
    int t, counter = 1;
    int a, b;
    
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);
        
        double f = (9.0 / 5.0) * a + 32;
        
        f += b;
        f -= 32;
        f *= 5;
        f /= 9.0;
        
        printf("Case %d: %.2lf\n", counter++, f);
    }

    return 0;
}