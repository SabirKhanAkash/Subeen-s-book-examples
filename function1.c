#include<stdio.h>
double area_of_circle(double r,double pi)
{
    double area;
    scanf("%lf",&r);
    area=3.1416*r*r;
    return area;
}

int main()
{
    int area,pi=3.1416,r;
    area=area_of_circle(r,pi);
    printf("%lf\n",area);

    return 0;
}
