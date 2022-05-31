#include <stdio.h>
void main()
{
    int arr_2d[3][3];
    for (int i=0;i<3;i++)
    for (int j=0;j<3;j++)
    {
        printf("Enter value: %d,%d\n",i,j);
        scanf(" %d",&arr_2d[i][j]);
    }

    for (int i=0;i<3;i++)
    {
    for (int j=0;j<3;j++)
    {
        printf(" %d",arr_2d[i][j]);
    }

    printf("\n");
    }
    
}