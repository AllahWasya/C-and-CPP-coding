#include<stdio.h>
#include<conio.h>
struct test
{
  char ch ;
  int num;
}t1,t2;


void main(void)
{
t1.num=13;
t1.ch='W';
t2.ch='X';
printf("Number is: %d\n",t1.num);
printf("Character is: %c\n", t1.ch);
printf("Character is: %c\n", t2.ch);
}
