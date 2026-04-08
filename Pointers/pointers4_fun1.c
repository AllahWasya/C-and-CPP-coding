#include<stdio.h>
// #include<conio.h>

int myFunction(int *a) {

 //  printf("Address of a in main is : %0d\n",&a);
   *a= *a+1;
    printf("Address of a in func is : %0d\n",*a);

  //  return *a;
}
int main() {
int a=10;
int *b;
b=&a;
int z=myFunction(&a);
printf("Address of a in main is : %0d\n",&a);
printf("increment is: %0d",*b);
}