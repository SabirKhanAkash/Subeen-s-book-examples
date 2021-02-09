#include<stdio.h>
int main()
{
    int a,b,t,m,gcd;
    printf("Enter Two numbers:\n");
    scanf("%d%d",&a,&b);
    m=a*b;
    if(a==0) gcd=a;
    else if(b==0) gcd =b;
    else {
        while (b!=0) {
            t=b;
            b=a%b;
            a=t;
        }
        gcd=t;
    }
    printf("The GCD is: %d\n",gcd);
    printf("The LCD is: %d\n",m/gcd);
    return 0;
}
