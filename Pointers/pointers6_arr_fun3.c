#include<stdio.h>
#include<conio.h>
/////////////////////////////////////////
void double1(int* arr, int size)
{
    for (int i=0; i<size; i++)
    arr[i] =2*arr[i];
}
////////////////////////////////////////
int sumfun(int* arr,int size)
{
int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

/////////////////////////////////////////

/////////////////////////////////////////
int main ()
{
int arr[]={56,45,33,27,47,36,99,34};
int size= sizeof(arr)/sizeof(arr[0]);
/////////////// ACTUAL //////////////////
for (int i=0; i<size; i++)
{
printf("%0d ", arr[i]);
}
printf("\n");
double1(arr,size);
//////////////// DOUBLED ///////////////
for (int i=0; i<size; i++)
{
printf("%0d ",arr[i]);
}
///////////////// SUM ////////////////
int result = sumfun(arr,size);
printf("\n%0d",result);
}

