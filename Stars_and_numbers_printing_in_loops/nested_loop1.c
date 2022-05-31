/*
#include<stdio.h>

int main()
{
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}

*/

/*
#include<stdio.h>
 
int main() {
	int i, j, k;
	for (i=1;i<=5;i++) {
		for (j=i;j<5;j++) {
			printf(" ");
		}
		for (k=1;k<(i*2);k++) {
			printf("%d",k);
		}
		printf("\n");
	}

}
*/

#include <stdio.h>
 
int main() {
	int i,j,N;

	printf("Eneter numer N: ");
	scanf("%d",&N);

	for (i = N; i>=1; i--)
	{
		for (j = N; j > i; j--)       
		{
			printf("%d",j);
		}

		for (j = 1; j <= (i*2)-1; j++)
		{
		   printf("%d",i);
		}
	    for (j = i+1; j <=N; j++)       
		{
			printf("%d",j);
		}

	printf("\n");
	
	}

	for (i = 2; i<=N; i++)
	{
		for (j = N; j > i; j--)       
		{
			printf("%d",j);
		}

		for (j = 1; j <= (i*2)-1; j++)
		{
		   printf("%d",i);
		}
	    for (j = i+1; j <=N; j++)       
		{
			printf("%d",j);
		}

	printf("\n");
	
	}

}
	