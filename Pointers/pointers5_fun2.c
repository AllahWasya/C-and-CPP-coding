/* 
1. In this code there is an integer pointer function that takes the address of value.
2. It updates the value at the address and return 
*/
#include<stdio.h>
#include<conio.h>

int myFunction(int *x) {

   printf("Address of a in func is : %0d\n",&x);
   *x= *x+1; // value at address a (passed) is updated
}
int main() {
int a=10;
printf("Address of a in main is : %0d\n",&a);
myFunction(&a);
printf("value_updated : %0d\n",a);

}