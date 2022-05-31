// Take age of 5 students and display
#include <stdio.h>
void main()
{
    int age[5];
    char name[6] ="Wasaya";   // size o array
    for (int i=0; i<5; i++)
    { 
    printf("Enter age: ");
    scanf("%d", &age[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Age of Student %d is : %d\n", i,age[i]);
    }
    for (int i = 0; i < 6; i++)
    {

        printf("%c", name[i]);
    }
    printf("\n");
}