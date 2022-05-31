// pointers in arrays
#include<stdio.h>
#include<conio.h>
int main(){

  int arr[5]={70,56,4,33,66};
  int *p;
  p=arr; // arr has address of first value in the array or &arr[0]
  
  printf("Address of value at 0 index in array is: %0d\n",p); //p=&arr[0] addrss of 0 index
  printf("Vale at 0 index in array is: %0d\n",*p); //* means value at ; and p means &arr[0]
  printf("Address of pointer: %0d\n",&p); // address of p it self that is storing address of other
  
  int arrSize = sizeof(arr)/sizeof(arr[0]); //sizeof(arr)=20; sizeof(arr[0])=4; 20/4=5 
  for (int i=0; i<arrSize;i++)
{
  printf("Address of value %0d in the array is= %0d\n",i, p);// addresses
  printf("Value at above address is : %0d\n",*p); // values
  p=p+1; // address is changing at each iteration
}
}