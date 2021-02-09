#include <stdio.h>
int main()
{
    int ara1[100];
    int ara2[5];
    int i,j, minimum, index_2,t;
    printf("Enter 5 numbers: \n");
    for (j=0 ; j<5 ; j++) {
        scanf("%d",&ara1[j]);
    }
    for (index_2 = 0; index_2 < 5; index_2++) {
        minimum = 10000;
        for (i = 0; i < 5; i++) {
            if (ara1[i] < minimum) {
                minimum = ara1[i];
                t = i;
            }
        }
        ara1[t]=10000;
        ara2[index_2] = minimum;
    }
    for (i = 0; i < 5; i++) {
        printf("%d\n", ara2[i]);
    }
    return 0;
}
