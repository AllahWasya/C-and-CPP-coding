/*
*********
*********
*********
*********
*/
/*
#include <stdio.h>

void main() {
	int i,j;
	for (i=0; i<5; i++) {
		for (j=0; j<5; j++) {
			printf(" * ");
		}
		printf("\n");

	}

}
*/
/*
          *
        * *
      * * *
    * * * *
  * * * * *
*/
/*
#include <stdio.h>

void main() {
	int i,j;
	for (i=1; i<=5; i++) {
           
           for (j=5; j>=i; j--)
           {
               printf(" ");
           }
           for (int k = 1; k<=i ; k++)
           {
               printf("*");
           }
           printf("\n");
    }
}
*/
/*
*
**
***
****
*****
*/
/*
#include <stdio.h>

void main() {
	int i,j;
	for (i=1; i<=5; i++) 
    {
       for (j=1; j<=5;j++)
           {
             if (i>=j)
             printf("*");
      
           }
           printf("\n");
    }
}
*/
/*

******
*****
****
***
**
*
*/

/*
#include <stdio.h>

void main() {
	int i,j;
	for (i=1; i<=9; i++) 
    {
        for (j=9;i<j;j--)
        {
           printf("*");
        }
        for (int k = 1; i <=k ; i++)
        {
            printf(" ");
        }
            printf("\n");
    }
}
*/
/*
*****
 ****
  ***
   **
    *
    */

/*
#include <stdio.h>
void main() {
	int i,j,k;
	for (i=1; i<=6; i++) 
    {
        for (k=1; i>=k; k++)
        {
            printf(" ");
        }
        for (j=6;j>=i;j--)
        {
           printf("*");
        }
        printf("\n");
    }
}
*/

/*

      *
     * *
    * * *
   * * * *

*/

/*
#include <stdio.h>

void main() {
	int i,j,k;
	for (i=1; i<=5; i++) {
		for (k=5; k>i; k--) {   // left side spaces are more thats why start from 5 and apply -- (high  t0 low)
			printf(" ");
		}
		for (j=1; j<=i; j++) {  // * are low to high 
			printf(" *");
		}
		printf("\n");
	}
}
*/
/*

     *
    **
   ***
  ****
 *****
  ****
   ***
    **
     *
     * 
*/

/*
#include <stdio.h>

void main() {
	int i,j,k,n;
	for (n=1; n<=2;n++)
    if (n==1)
    {
      for (i=1; i<=5; i++) {
           for (j=5; j>=i;j--)
        {
          printf(" ");
        }
        for (k=1; k<=i;k++)
        {
          printf("*");
        }
        printf("\n");
      }
        printf(" ");
    }
    else if (n==2)
    {
      for (i=1; i<5; i++) {
           for (j=1;j<=i;j++)
        {
          
          printf(" ");
        }
        for (k=5; k>i;k--)
        {
          printf("*");
        }
        printf("\n");
        printf(" ");    
      }
    
    }

}

*/
/*
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15

*/
/*
#include <stdio.h>

void main() {
    
	int i,j,len,count =1;
    printf("Enter number of rows: ");
	scanf("%d", &len);
	for (i=1; i<=len; i++) 
    {
       for (j=1; j<=i;j++)
           {
             printf("%d",count);
             count=count+1;
           }
           printf("\n");
    }
}
*/
/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5 

OR

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5 

*/
/*
#include <stdio.h>

void main() {
	int i,j,k,count=1;
	for (i=1; i<=5; i++) 
  {
  for (j = 5; j>=i; j--)
  {
    printf(" ");
  }
  for (k= 1; k<=i; k++)
  {
    printf(" %d",count);
    count=count+1;
  }
  //count=count+1;
  count=1;
  printf("\n");
  }
}
*/
/*
#include <stdio.h>

void main() {
	int i,j,k,count=1,p=1;
	for (i=1; i<=5; i++) {     // loop of row

  for (j = 5; j>=i ; j--)    // loop for space
  {
    printf(" ");
  }
  for (k = 1; k<=p ; k++)   // p indicate number of elements // 
  {
    printf("%d",count);
    count=count+1;
  }
  printf("\n");
  count=1;
  p=p+2;
  }
}
*/

/*
11111
2222
333
44
5
*/
/*
12345678910111213
1234567891011
123456789
1234567
12345
123
1
*/

/*
#include <stdio.h>

void main() {
	int i,j, count=13;
	for (i=7; i >=0; i--) 
  {
    while (count>0)
    {
    for (j = 1; j <= count; j++)
    {
      printf("%d",j);
    }   
    printf("\n");
    count=count-2; 
    }
  }
}

*/
/*
#include <stdio.h>

void main() {
	int i,j,k, count=5,p=5;
	for (i=1; i <=5; i++) 
      {
       
       for (j=1;j<=i;j++)
       {
         printf("%d",p);
         p=p-1;
       }
       for (k=5; k>i; k--)
       {
         printf("%d",count);
       }
      printf("\n");
      p=5;
      }
  }
*/
/*
1
10
101
1010
10101
*/
/*

#include<stdio.h>
int main()
{
  int i,j,k;
  for (i=1;i<=5;i++)
  {
    for (j =1; j <= i; j++)
    {
     printf("%d",j%2);
    }
    printf("\n");
  }
  
}
*/

/*

12344321
123**321
12****21
1******1

*/

/*
#include<stdio.h>
int main()
{
  int i,j,k,b,a=0;
  for (i=1;i<=4;i++)
  {
     for (j =1; j <=4; j++)
     {
       if (j<6-i)
       {
        printf("%d",j);
       }
       else
       printf("*");
       
     }
    for (k =4; k >=1; k--)
     {
       if (k<6-i)
       {
        printf("%d",k);
       }
       else
       printf("*");
       
     }
  printf("\n");
  }
}

*/

/*

5432*
543*1
54*21
5*321
*4321

*/

/*
#include<stdio.h>
int main()
{
  int i,j,k;
  for (i=1;i<=5;i++)
  {
     for (k = 5; k>=2; k--)
     {
      if (k>i)
      {
          printf("%d",k);
      }
     }
     printf("*"); 
     for (j = 1; j<=i; j++)
     {
       printf("%d",j);
     }
     
  printf("\n");   
}
}

*/
/*

4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
#include <stdio.h>

int main()
{
    int N=1,i,j;
for (i = 4; i>=1; i--)
{
  for (j = 1; j<=i; j++)
  {
    printf(" ");
  }
  for (j = 4; j>=i; j--)
  {
    printf("%d",N);
    N++;
  }
printf("\n");
  
}
N=N-1;
for (i = 1; i<=4; i++)
{
  for (j = 1; j<=i; j++)
  {
    printf(" ");
  }
  for (j = 4; j>=i; j--)
  {
    printf("%d",N);
    N--;
  }
printf("\n");
  
}
return 0;
}