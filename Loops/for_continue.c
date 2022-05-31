#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Eneter vale...");
    scanf("%d",&i);
    for (n=1;n<i; n++) 
    {
        if (n==7 || n==8)
        continue;
        printf("no.=%0d\n",n); // printing series of values
    if (n==15)
        break;
    
    }
}