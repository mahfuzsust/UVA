//
//  main.c
//  UvaSolutions
//
//  Created by Mahfuzur Rahman on 10/4/15.
//  Copyright (c) 2015 Mahfuzur Rahman. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[10000], ptr[10000];
    int i = 0, sum, val, len,x = 0,j ;
    while (gets(str)) {
        len = strlen(str) - 1;
        
        int pt = -1, kk = 0;
        for (i = 0; str[i]; i++) {
            if (str[i] == ' ' || i == len) {
                j = (i == len) ? i : i - 1;
                for (; j > pt; j--) {
                    ptr[kk++] = str[j];
                }
                pt = i;
                if (i != len) {
                    ptr[kk++] = str[i];
                }
                
            }
        }
        ptr[kk] = '\0';
        puts(ptr);
    }
    
    return 0;
}