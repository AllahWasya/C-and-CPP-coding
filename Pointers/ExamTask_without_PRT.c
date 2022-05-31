#include<stdio.h>
#include<string.h>
int main()
{
    char C0[]="0123456789";
    char C1[]="12332b72duh877t6537665789u4";
    int size0= strlen(C0);
    int size=strlen(C1);
    int count_arr[size0];
for (int i = 0; i < size0; i++)
{
 int count=0;
  for (int j = 0; j < size; j++)
  {
      
      if (C0[i] == C1[j]) // checking equality 
      {
         count=count+1;  
      }
  }
  count_arr[i]=count; // storing count in array
}

// To print count_array

int size1=sizeof(count_arr)/sizeof(count_arr[0]); // int is 4 bytes for 10 ints size1=40/4; 
for (int k = 0; k < size1; k++)
{
   printf("%d ",count_arr[k]);
}
}  