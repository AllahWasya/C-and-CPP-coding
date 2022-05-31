#include<stdio.h>
void main()
{
    int i,j,z;
    for (i = 0; i < 5; i++)
    {
        for (j= 0; j <=i; j++)
        {
        z=add(i,j);
        printf("%d ",z);
        }
        printf("\n");
    }
}
int add (int a, int b)
{
    return a+b;
}