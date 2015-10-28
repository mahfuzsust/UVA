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
typedef int bool;
#define true 1
#define false 0

char ans[105];
void getSum(char str[], char ptr[]) {
    int len1 = strlen(str);
    int len2 = strlen(ptr);
    int i, carry = 0, j= 0;
    char temp[105];
    
    if (len1 >= len2) {
        for (i = (int)len1 - 1, --len2; i >= 0; i--, len2--) {
            int sum = str[i] - '0';
            if (len2 >= 0 && ptr[len2]) {
                sum += ptr[len2] - '0';
            }
            sum += carry;
            temp[j++] = sum % 10 + '0';
            carry = (sum > 9) ? 1 : 0;
        }
    }
    else {
        for (i = (int)len2 - 1, --len1; i >= 0; i--, len1--) {
            int sum = ptr[i] - '0';
            if (len1 >= 0 && str[len1]) {
                sum += str[len1] - '0';
            }
            sum += carry;
            temp[j++] = sum % 10 + '0';
            carry = (sum > 9) ? 1 : 0;
        }
    }
    if (carry > 0) {
        temp[j++] = '1';
    }
    ans[j] = '\0';
    int k = 0;
    for (i = j - 1; i >= 0; i--) {
        ans[k++] = temp[i];
    }
}

int main(int argc, const char * argv[]) {
    char str[105][105];
    int i = 0;
    while (1) {
        gets(str[i]);
        if (str[i][0] == '0') {
            break;
        }
        i++;
    }
    
    ans[0] = '0';
    ans[1] = '\0';
    
    for (--i; i >= 0; i--) {
        getSum(str[i], ans);
    }
    for (i = 0; ans[i]; i++) {
        printf("%c",ans[i]);
    }
    printf("\n");
    return 0;
}