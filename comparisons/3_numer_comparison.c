#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 1st no. : ");
    scanf("%d", &a);
    printf("Enter 2nd no. : ");
    scanf("%d",&b);
    printf("Enter 3rd no. : ");
    scanf("%d", &c);
// code to fine maximum number

if (a>b && b>c)
{
    printf("%d is maximum numbber\n",a);
}
else if (b>c)
{
    printf("%d is maximum numbber\n",b);
}
else
    printf("%d is maximum numbber\n",c);

// code to find minimum number

if (a<b && b<c)
{
    printf("%d is minimum numbber\n",a);
}
else if (b<c)
{
    printf("%d is minimum numbber\n",b);
}
else
    printf("%d is minimum numbber\n",c);


// code to find median number

if (a>b && b>c)
{
    printf("%d is median numbber\n",b);
}
else if (a>b)
{
    printf("%d is median numbber\n",a);
}
else 
    printf("%d is median numbber\n",c);
}


