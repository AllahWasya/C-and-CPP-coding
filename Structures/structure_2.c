#include<stdio.h>
// #include<conio.h>
typedef struct test
{
  char ch ;
  int num;
} test1;


void main(void)
{

test1 t3,t1,t2;
t1.num=13;
t1.ch='W';
t2.ch='X';
t3.num=10;
printf("Number is: %d\n",t1.num);
printf("Number is: %d\n",t3.num);

printf("Character is: %c\n", t1.ch);
printf("Character is: %c\n", t2.ch);
}
