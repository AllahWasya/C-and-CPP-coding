#include<stdio.h>
#include<conio.h>

int myFunction(int a) {

 //  printf("Address of a in main is : %0d\n",&a);
   return a+1;
}
int main() {
int a=10;
int z=myFunction(a);
// printf("Address of a in main is : %0d\n",&a);
printf("increment is: %0d",z);
}