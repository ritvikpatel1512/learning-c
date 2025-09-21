#include<stdio.h>  // sum of two 2d array
int main()
{   int i,j;
    int n[2][3]={1,2,3,4,5,6};
    int m[2][3]={7,8,9,1,2,4};
    printf("Your array is :");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {printf("%d %d\n", n[i],m[j]);
        }
    }




}
