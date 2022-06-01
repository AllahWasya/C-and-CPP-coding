/*
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter value: ";
    cin>>x;
    cout<<"value of x is: "<<x<<endl;
    return 0;
}
*/
#include <stdio.h>
int i,j;
int main()
{
for(i=5;i>=1;i--)
{
    for(j=5;j>i;j--)
    {
        printf("%d",j);
    }
    
    for(j=1;j<=(2*i)-1;j++)
    {
        printf("%d",i);
    }
    
    for(j=i+1;j<=5;j++)
    {
        printf("%d",j);
    }
    
    printf("\n");
}
}
