/*
#include<stdio.h>
void main()
{
    int i,j,k,count=1;

    for (i=1; i <=5; i++)
    {
        for (j= 5; j>=i; j--)
        {
            printf(" ");
        }
        for (k=1;k<=i;k++)
        {
            printf(" *");
           // count++;
        }
     printf("\n");
       
    } 

 for (i=4; i >=1; i--)
    {
        for (j= 5; j>=i; j--)
        {
            printf(" ");
        }
        for (k=1;k<=i;k++)
        {
            printf(" *");
            
        }
     printf("\n");
       
    } 
}

*/

/*
#include<stdio.h>
void main()
{
    int i,j,count=1;

    for (i=1; i <=5; i++)
    {
      for (j = 1; j <= i; j++)
      {
         printf(" %d",count);
         count=count+1;
      }
      printf("\n");
    }
}
*/
/*
#include<stdio.h>
void main()
{
    int i,j,k,count=1;
    for (i= 1; i <=5; i++)
    {
        for (j=5; j>=i; j--)
        {
           printf(" ");
        }
        for (k= 1; k<=i+j; k++)
        {
           printf("%d",k);
          // count=count+1;

        }
        printf("\n");
    }
}
*/

#include<stdio.h>
void main()
{
    int i,j,k,count=1;
    for (i= 5; i >=1; i--)
    {
        for (j=5; j>=i; j--)
        {
           printf(" ");
        }
        for (k= 1; k<=i+j; k++)
        {
           printf("%d",k);
          // count=count+1;

        }
        printf("\n");
    }
}
    