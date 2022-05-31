// Basics concept of pointers
#include<stdio.h>
#include<conio.h>
int main(){
  int *p;
  int x;
  p=&x;
  printf("Address : %0d\n",p); // address
  printf("value : %0d\n",*p); // garbage value
  printf("Address : %0d\n",&p); // Address of pointor that is storing the address of variable x
  x=77;                       // replcing actual value 
  printf("value : %0d\n",*p); // Now checking value at address x
  printf("Address : %0d\n",p); // same address
  *p=99;                      // replacing value at address
  printf("value : %0d\n",*p); // replacing value using pointors
  printf("Address : %0d\n",p); // same address
  *p=*p+1;
  printf("value : %0d\n",*p); // replacing value using pointors
  printf("Address : %0d\n",p); // same address
  *p=*(p+3);
  printf("value : %0d\n",*p); // replacing value using pointors
  printf("Address : %0d\n",p); // same address
}