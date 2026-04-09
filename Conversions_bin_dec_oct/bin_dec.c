// convert binary to decimal
// #include <stdio.h>
// #include <math.h>
// int main() 
// {
//  int dec = 0, i = 0, rem;
//   long long n;
//   printf("Enter a binary number: ");
//   scanf("%lld", &n);
// while (n!=0) {
//     rem = n % 10;
//     n /= 10;
//     dec += rem * pow(2, i);
//     ++i;
//   }
//  //return dec;
//   printf("\nits decimal is: %lld\n\n", dec);
//   return 0;
// }

//////////////////////////
#include<stdio.h>
#include<math.h>
void main()
{
  int binary;
  printf("Enter Binary Value \n");
  scanf ("%d",&binary);
  int y= bin_dec(binary);
  printf("Decimal %0d", y);
  return 0;
}
int bin_dec(int x)
{
    int dec =0, rem=0, i=0, base =1;
    while(x)
    {
        rem = x%10;
        x= x/10;
        dec = dec + rem * base;
        base =base*8;
        i++;
    }
    return dec;
}