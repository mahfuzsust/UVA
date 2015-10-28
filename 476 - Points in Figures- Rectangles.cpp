//
//  main.c
//  UvaSolutions
//
//  Created by Mahfuzur Rahman on 10/4/15.
//  Copyright (c) 2015 Mahfuzur Rahman. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <string.h>

bool isEqual(double a, double b) {
    return fabs(a-b) < 0.0000001;
}


int main(int argc, const char * argv[]) {
    char str[200];
    double a, b, ax[15], ay[15], bx[15], by[15];
    int i = 0, counter = 0;
    
    while(1) {
        gets(str);
        if(str[0] == '*') {
            break;
        }
        counter++;
        sscanf(str, "r %lf %lf %lf %lf", &ax[i], &ay[i], &bx[i], &by[i]);
        i++;
    }
    
    for (int j = 1; ; j++) {
        scanf("%lf %lf", &a, &b);
        
        if (isEqual(a, (double)9999.9) && isEqual(b, (double)9999.9)) {
            break;
        }
        bool match = false;
        
        for (i = 0; i < counter; i++) {
            if (a > ax[i] && a < bx[i] && b > by[i] && b < ay[i]) {
                printf("Point %d is contained in figure %d\n", j, i + 1);
                match = true;
            }
        }
        if (!match) {
            printf("Point %d is not contained in any figure\n", j);
        }
    }
    
    return 0;
}