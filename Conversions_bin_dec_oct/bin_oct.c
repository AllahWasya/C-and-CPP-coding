// convert binary to decimal
#include <stdio.h>
#include <math.h>
int main() 
{
 int dec = 0, i = 0, rem;
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(8, i);
    ++i;
  }
 //return dec;
  printf("\nits decimal is: %lld\n\n", dec);
  return 0;
}