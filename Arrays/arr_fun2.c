// #include<stdio.h>
// void show(int);
// void main(void)
// {
//     int arr[7]={55,33,44,77,36,58,38};
//     for (int i = 0; i < 7; i++)
//     {
//         show(arr[i]);
//     }
// }
// void show(int t)
// {
//     printf("%d\n",t);
// }

///////////////////////////////////////

#include<stdio.h>
void main()
{
    int arr[2][5] = {{1,2,3,5,6}, {45,23,24,53,67}};
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<5; j++)
        {
            show(arr[i][j]);
                // printf("Values :\n");

        }
    }
}

int show(int t)
{
    printf("Values : %d\n",t);
}