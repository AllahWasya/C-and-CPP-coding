#include<stdio.h>
#include<string.h>
int main()
{
int count_arr[100];
char str[]="ahashwsnnwdwmd";
int x=7;
printf("%c \n",str[6]);
if (str[0] == str[2])
{
    printf("%d \n",x);
} 
x=x+1;
count_arr[0] = x;
printf("%0d \n",count_arr[0]);
for (int i = 0; i < 50; i++)
{
    count_arr[i]=i+6;
    printf("%0d ",count_arr[i]);
}

}


