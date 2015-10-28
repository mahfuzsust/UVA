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

double area (double x1, double y1, double x2, double y2, double x3, double y3) {
    return fabs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool isEqual(double a, double b) {
    return fabs(a-b) < 0.0000001;
}

int main(int argc, const char * argv[]) {
    char str[200];
    double a, b, ax[15], ay[15], bx[15], by[15], cx[15], cy[15], rad[15];
    int i = 0, counter = 0, cir[100];
    
    while(1) {
        gets(str);
        if(str[0] == '*') {
            break;
        }
        if (str[0] == 'r') {
            sscanf(str, "r %lf %lf %lf %lf", &ax[i], &ay[i], &bx[i], &by[i]);
            cir[i] = 1;
        }
        else if (str[0] == 'c') {
            sscanf(str, "c %lf %lf %lf", &ax[i], &ay[i], &rad[i]);
            cir[i] = 2;
        }
        else if (str[0] == 't') {
            sscanf(str, "t %lf %lf %lf %lf %lf %lf", &ax[i], &ay[i], &bx[i], &by[i], &cx[i], &cy[i]);
            cir[i] = 3;
        }
        
        i++;
        counter++;
    }
    
    for (int j = 1; ; j++) {
        scanf("%lf %lf", &a, &b);
        
        if (isEqual(a, (double)9999.9) && isEqual(b, (double)9999.9)) {
            break;
        }
        bool match = false;
        
        for (i = 0; i < counter; i++) {
            if (cir[i] == 2) {
                double ttx = ax[i] - a;
                double tty = ay[i] - b;
                double dist = sqrt(ttx * ttx + tty * tty);
                
                if (dist < rad[i]) {
                    printf("Point %d is contained in figure %d\n", j, i + 1);
                    match = true;
                }
            }
            else if (cir[i] == 1) {
                if (a > ax[i] && a < bx[i] && b > by[i] && b < ay[i]) {
                    printf("Point %d is contained in figure %d\n", j, i + 1);
                    match = true;
                }
            }
            else if (cir[i] == 3) {
                
                double area1 = area(a,b, ax[i], ay[i], bx[i], by[i]);
                double area2 = area(a,b, bx[i], by[i], cx[i], cy[i]);
                double area3 = area(a,b, cx[i], cy[i], ax[i], ay[i]);
                
                double areas = area(ax[i], ay[i], bx[i], by[i], cx[i], cy[i]);
                
                double sum = area1+area2+area3;
                
                if (isEqual(sum, areas)) {
                    printf("Point %d is contained in figure %d\n", j, i + 1);
                    match = true;
                }
            }
        }
        if (!match) {
            printf("Point %d is not contained in any figure\n", j);
        }
    }
    return 0;
}