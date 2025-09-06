#include<stdio.h>  // Calculate sum and mean of any n values.
int main()
{   int m,i,n;
    float avg,sum=0;
    printf("How many number do you need\n to add and get mean of it: ");
    scanf("%d", &n);
for(i=1;i<=n;i++)
{
    printf("Enter %d No  :", i);
    scanf("%d", &m);
    sum=sum+m;
}
avg=sum/n;
printf("Mean of given numbers are %f", avg);
return 0;

}
