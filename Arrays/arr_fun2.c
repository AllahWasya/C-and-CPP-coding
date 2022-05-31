#include<stdio.h>
void show(int);
void main(void)
{
    int arr[7]={55,33,44,77,36,58,38};
    for (int i = 0; i < 7; i++)
    {
        show(arr[i]);
    }
}
void show(int t)
{
    printf("%d\n",t);
}