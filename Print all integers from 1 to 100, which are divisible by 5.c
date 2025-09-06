#include<stdio.h>  //Print all integers from 1 to 100, which are divisible by 5
int main()
{   int count=0,i,n,m;
     printf("Enter 1st No: ");
    scanf("%d", &n);
    printf("Enter 2nd No: ");
    scanf("%d", &m);
    for(i=n;i<=m;i++)
    {  if(i%5==0)
    {
    count=count+1;
    }

    }
    printf("No of number divison by 5: %d", count);
    return 0;
}
