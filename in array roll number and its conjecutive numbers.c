#include<stdio.h>   // roll numbers and marks in array
int main()
{
    int arr[4][2],i,j;
    for(i=0;i<3;i++)
    {
    for(j=0;j<2;j++)
    {scanf("%d", &arr[i][j]);}
    };
     for(i=0;i<3;i++)
    {
    for(j=0;j<2;j++)
    {printf("%d\t", arr[i][j]);}
    printf("\n");
    };



return 0;
}
