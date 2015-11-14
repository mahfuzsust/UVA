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
    
    int arr[15];
    int t;
    bool p = true;
    
    scanf("%d ", &t);
    while (t--) {
        
        int x = 0;
        bool ord = true;
        for (int i = 0; i < 10; i++) {
            scanf("%d", &arr[i]);
        }
        for (int i = 1; i < 10; i++) {
            if ((x == 1 && arr[i] < arr[i - 1]) || (x == 2 && arr[i] > arr[i - 1])) {
                ord = false;
                break;
            }
            if (arr[i] > arr[i - 1]) {
                x = 1;
            }
            else if (arr[i] < arr[i - 1]) {
                x = 2;
            }
            else {
                ord = false;
                break;
            }
        }
        if (p) {
            printf("Lumberjacks:\n");
            p = false;
        }
        if (ord) {
            printf("Ordered\n");
        }
        else {
            printf("Unordered\n");
        }
    }
    return 0;
}