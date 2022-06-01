
#include<stdio.h>
#include<conio.h>
void main( )
{
	int num, factorial ;
	printf ( "\nEnter any number " ) ;
	scanf ( "%d", &num ) ;
	factorial = fact ( num ) ;
	printf ( "Factorial value = %d\n", factorial ) ;
}

fact ( int n )
{
 
	if ( n == 0 )
		return ( 1 ) ;
	else
		return (n * fact ( n - 1 ));
}
