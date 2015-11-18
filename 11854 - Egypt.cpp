#include <stdio.h>
int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c) && a &&b &&c) {
        if(a > b && a > c) {
            if((b * b + c * c) == a*a) printf("right\n");
            else printf("wrong\n");
        }
        
        else if(b > a && b > c) {
            if((a * a + c * c) == b*b) printf("right\n");
            else printf("wrong\n");
        }
        else {
            if((a * a + b * b) == c*c) printf("right\n");
            else printf("wrong\n");
        }
        
    }
    
    return 0;
}