#include <stdio.h>
main()
{
    int t,i,n,j;
    printf("Enter the array size\n");
    scanf("%d",&n);
    int ax[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ax[i]);
    }
    printf("The order is:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ax[i]>ax[j])
            {
                t=ax[i];
                ax[i]=ax[j];
                ax[j]=t;
            }
        }
        printf("%d\n",ax[i]);
    }
    printf("\nThe END\n");
}
