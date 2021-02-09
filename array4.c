#include<stdio.h>
int main()
{
    int arr[]={100,200,300,400,500},i,j,t;
    for (i=0,j=4; i<5 ; i++,j--) {
        t=arr[j];
        arr[j]=arr[i];
        arr[i]=t;
    }
    for (i=4 ; i>=0 ; i--)
        printf("%d\n",arr[i]);

    return 0;
}
