#include<stdio.h>
void main()
{
    int x;
    printf("Eneter value : ");
    scanf("%d",&x);
    
    do
    {
        printf("value of x is: %d\n",x); // 1 dfa yah lazmi chla ga
        x++; 
    } while (x<1);
    }
    