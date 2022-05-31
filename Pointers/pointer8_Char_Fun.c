#include<stdio.h>
#include<conio.h>
void func(char* C)
{
   for (int i=0; i<4; i++)
   {
       printf("%c",*(C+i));
   }
}
void print(char* C1)
{
   while (*C1 !='\0')
   {
       printf("%0c",*C1);
       C1++;
   }
printf("\n");
}


void main()
{
char name[4]="JHON";
print(name);
func(name);
}