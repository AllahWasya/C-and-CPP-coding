#include<stdio.h>
#include<string.h>
int main()
{
    char C1[4]="JHON"; // String
    char* C2;
    C2=C1;   // C2 will get address of 1st Character

    printf("C2 1st Character address : %d \nValue at 1st Character address :",C2,*C2);
    for (int i = 0; i < 4; i++)
    {    
       printf("%0c \n", C1[i]); // Characters
       printf("%c \n",*(C2+i));  
       printf("%0d\n",&C1[i]);  // Addresses of each Character
       printf("%0d\n",C2+i);    //  
    }
}
