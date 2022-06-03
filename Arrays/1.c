// Take age of 5 students and display
#include <stdio.h>
#include <string.h>
void main()
{
    int age[5];
    char name[5] ;   // size o array
    for (int i=0; i<5; i++)
    { 
    printf("Enter age: ");
    scanf("%d", &age[i]);
    }
    for (int i=0; i<5; i++)
    { 
    printf("Enter name: ");
    scanf("%s", &name);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Age of Student %d is : %d\n", i,age[i]);
    }
    for (int i = 0; i < 5; i++)
    {

        printf("%s\n", name);
    }
    printf("\n");
}