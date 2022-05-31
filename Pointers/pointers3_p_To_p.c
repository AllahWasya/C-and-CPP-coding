#include<stdio.h>
#include<conio.h>
int main(){
  int *p;
  int **q;
  int ***r;
  int x=10;
  p=&x;
  q=&p;
  r=&q;
  // value (x) <= address1 (p) <= address2 (q) <= address3 (r)
  // ** address k address pa jo value perhi ha
  // *** value at address of address of address 

  printf("Address-1 of x is: %0d\n",p); // address1 (address of value)
  printf("value of x is: %0d\n",*p); // value 

  printf("Address-2 : %0d\n",q); // address2 (address of address 1)
  printf("Address-1 : %0d\n",*q); // address1 (addresss of value)
  printf("value : %0d\n",**q); // value
  
  printf("Address-3: %0d\n",r); // address3 (address of address 2)
  printf("Address-2: %0d\n",*r); // address2 (address of address 1)
  printf("Address-1: %0d\n",**r); // address1 (address of value)
  printf("value  : %0d\n",***r); // value

  //  p=*q=**r ; q=*r
}
