#include<stdio.h>
#include<conio.h>
int main(){

  //pointor arithematic

  int *p;
  int x=1025;
  p=&x;
  printf("value: %0d; address: %0d\n",*p,p);
  printf("value: %0d; address: %0d\n",*(p+1),p+1); // garage value at next address 16+4 bytes
  char *p0;
  p0=(char*)p; // types casting
  printf("size of integer is: %d bytes\n",sizeof(int));
  printf("size of char is: %d bytes\n",sizeof(char));
  printf("value: %0d; address: %0d\n",*p,p);
  printf("value: %0d; address: %d",*(p0+1),(p0+1)); //next byte is 00000100=4
  //1025 in 4 bytes :00000000 00000000 000000100 00000001
}