#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter 1st value: ");
    scanf("%d",&x);
    printf("Enter 2nd value: ");
    scanf("%d",&y);
    z=add(x,y);
    printf("Sum is: %d\n",z);

}
int add (int a, int b)
{
    return a+b;
}