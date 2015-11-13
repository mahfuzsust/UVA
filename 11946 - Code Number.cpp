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

void printChar(char a) {
    if (a == '0') {
        printf("O");
    }
    else if (a == '1') {
        printf("I");
    }
    else if (a == '2') {
        printf("Z");
    }
    else if (a == '3') {
        printf("E");
    }
    else if (a == '4') {
        printf("A");
    }
    else if (a == '5') {
        printf("S");
    }
    else if (a == '6') {
        printf("G");
    }
    else if (a == '7') {
        printf("T");
    }
    else if (a == '8') {
        printf("B");
    }
    else if (a == '9') {
        printf("P");
    }
    else {
        printf("%c", a);
    }
}

int main(int argc, const char * argv[]) {
    char a;
    int t;
    
    scanf("%d ", &t);
    while (t--) {
        int first = 1;
        while((a = getchar()) != EOF) {
            printChar(a);
        }
    }
    return 0;
}