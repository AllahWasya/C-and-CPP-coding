#include<stdio.h>
#include<string.h>
int main()
{
    char C[5]; // 5 bytes array
    char T[100];
    char C1[]="I am Allah Wasaya"; // String
    C[0]='J';  
    C[1]='H';
    C[2]='O';
    C[3]='N';
    int len=strlen(C);
    printf("Size of String is: %0d bytes\n",sizeof(C1));
    printf("Name: %s; length= %d\n",C,len);
    strcpy(T,C1); // copying string; 
    printf("%0d : %0s :%s",strlen(C1),strupr(C1),T);
}