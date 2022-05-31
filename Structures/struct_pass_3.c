#include<stdio.h>
struct test
{
    int a;
    float b;
    char c;
};
void show(test);
void main(void)
{
    struct test t1,t3;
    t1.a=15;
    t1.b=13.5;
    t1.c='c';
    t3=t1;
    t3.a=16;
    printf("value of int in filed 3 is: %d\n",t3.a);
    show(t1);
    t1=t3;    // t3 value 16 will be replaced
    show(t1);
}
void show(struct test t2)
{
    printf("%d\n",t2.a);
    printf("%f\n",t2.b);
    printf("%c\n",t2.c);
}
