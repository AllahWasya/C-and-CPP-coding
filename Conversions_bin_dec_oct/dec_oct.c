#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10],n,i=0;    
system ("cls");  
printf("Enter the number to convert: ");    
scanf("%d",&n);    

while (n>0)    
{    
a[i]=n%8;    
n=n/8;
i++;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);
}   
printf("\n\n"); 
return 0;  
} 