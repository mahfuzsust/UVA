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
#include <math.h>

int main(int argc, const char * argv[]) {
    int n, x, y, r;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d",&x,&y,&r);
        double d = sqrt( (x - 0)*(x - 0) + (y - 0)*(y - 0));
        
        printf("%.2lf %.2lf\n", r - d, r + d);
    }
    
    return 0;
}