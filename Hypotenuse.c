#include <stdio.h>
#include <math.h>
int main(){
    int x,y;
    float s;
    scanf("%d%d",&x,&y);
    s=sqrt(x*x+y*y);
    printf("%.2f",s);
}