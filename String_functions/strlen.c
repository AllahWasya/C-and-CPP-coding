#include<stdio.h>
#include<string.h>
void main()
{
    char name[]= "Wasaya";
    char copy[strlen(name)];
    printf("\nLenghth: %d\n\n",strlen(name));
    strcpy(copy,name);
    printf("String copy is: %s\n\n",copy);
    strcat(copy," Khan");
    printf("String copy is: %s\n\n",copy);
    
}