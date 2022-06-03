/*
#include <stdio.h>

typedef enum size {
    small,
    large,
    medium,
    extr_large
}size;

void main()
{
    size shoe_size;
    shoe_size=extr_large;
    printf("Shoe size is : %d\n",shoe_size);
}

*/
#include <stdio.h>
typedef struct complex {
   
   double real;
   double imag;

}complex1;

int main()
{
      complex1 c1= {.real=55, .imag=12};
      complex1 c2= {.real=66, .imag=10};
      complex1 s;
      s.real =c1.real+c2.real;
      s.imag=c1.imag+c2.imag;
      printf("sum is: %.2lf + %.2lf\n", s.real, s.imag);
      return 0;
      
}


