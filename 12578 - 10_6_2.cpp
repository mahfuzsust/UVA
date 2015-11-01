#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)

int main() {
    int m;
    double rad, wid, area_cir, area_rect, n;
    scanf("%d", &m);

    while(m--) {
        scanf("%lf", &n);

        rad = n / 5;
        wid = (6 * n) / 10;

        area_cir = PI * rad * rad;
        area_rect = n * wid - area_cir;

        printf("%.2lf %.2lf\n", area_cir, area_rect);
    }
    return 0;
}
