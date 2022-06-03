#include<stdio.h>
int r;
void main()
{
    int a=6,b=9;
    r=fun(a,b);
    printf("result is: %d\n",r);

}
int fun(int x,int y)
{
    return x+y;
}