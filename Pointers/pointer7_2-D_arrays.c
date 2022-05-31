#include<stdio.h>
#include<string.h>
int main()
/*
             400   404  408  412   416  420  424  428
    Address  _________________________________________
     values  | 10 | 11 | 12 | 13 || 14 | 15 | 16 | 17 |
                      A[0]                  A[1]
*/
{   
int A[2][4] = {
    {10, 11, 12, 13},                 
    {14, 15, 16, 17}
};  
int (*ptr)[4]=A; 
printf("%d \n",A);            // address of 1st element in array
printf("%d \n",ptr);          // address of 1st element in array
printf("%d \n",ptr+1);        // This address will be address of ptr+16 (4 elements in row)
printf("%d \n",ptr[0]+1);     // address of element in 1st row and 2nd coloumn in array
printf("%d \n",ptr[1]+1);     // address of element in 2nd row and 2nd coloumn in array
printf("%d \n",*(ptr[0]));    // Values at 1st element (1st row 1st coloumn)  
printf("%d \n",*(ptr[1]));    // Values at 1st element (2nd row 1st coloumn)
printf("%d \n",*(ptr[0]+1));  // Value at 1st row 2nd coloumn
printf("%d \n",*(ptr[0]+3));  // Value at 1st row 4nd coloumn
printf("%d \n",*(ptr[0]+4));  // Value at 1st row 1st coloumn (5th element in array 
printf("%d \n",*(ptr[0]+7));  // Value at 1st row 1st coloumn (8th element in array
}