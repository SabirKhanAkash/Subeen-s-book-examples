#include<stdio.h>
int main()
{
    char c = 'A',*p,**q;
    p = &c;
    q = &p;
    **q = 'B';
    printf("%c\n",c);
    printf("%c\n",*p);
    printf("%c\n",**q);

    return 0;
}
