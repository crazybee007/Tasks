#include <stdio.h>
#include <math.h>
int main(void)
{
    const double e=2.718281828;
    double x,y,d;
    scanf("%lf%lf",&x,&y);
    d=sqrt(x+2*y)-pow(e,3*x)+fabs(x);
    printf("%.6f\n",d);
    return 0;
}
