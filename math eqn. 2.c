#include<stdio.h>
int main()
{
    int a1=4,a2=5,b1=5,b2=6;
    printf("4x+5y=14 5x+6y=17\nx=? y=?\n");
    printf("x= %d\ny= %d\n",((b2*14)-(b1*17))/((a1*b2)-(a2*b1)),((a1*17)-(a2*14))/((a1*b2)-(a2*b1)));
    return 0;
}
