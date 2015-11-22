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

int main(int argc, const char * argv[]) {
    
    int n, a, b, i, j, arr[10];
    
    while (scanf("%d",&n) && n) {
        for (i = 0; i < n; i++) {
            a = 0;
            b = 0;
            bool x = false;
            for (j = 0; j < 5; j++) {
                scanf("%d", &arr[j]);
            }
            for (j = 0; j < 5; j++) {
                if (arr[j] > 127) {
                    a++;
                } else {
                    b++;
                    if (b > 1) {
                        x = true;
                        break;
                    }
                    c = j;
                }
            }
            
            if (!x && b == 1) {
                printf("%c\n", c + 'A');
            }
            else printf("*\n");
            
        }
        
        
    }
    
    return 0;
}