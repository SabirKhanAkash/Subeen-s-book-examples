/* NULL Pointer */

#include<stdio.h>
int main()
{
    int *p = NULL;
    *p = 100;
    printf("%d\n",*p);

    return 0;
}
