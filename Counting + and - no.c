#include<stdio.h>       //Count +ve,-ve and zeroes in 200 values.
int main()
{   int n,m,countpos=0,countneg=0,countzeroes=0,i;
    printf("How many integer number do you need\n to check positive or negative: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
    printf("Enter %d No  :", i);
    scanf("%d", &m);
    if(m==0)
    {countzeroes=countzeroes+1;}
    if(m>0)
    {countpos=countpos+1;}
    if(m<0)
    {countneg=countneg+1;}
    }
    printf("\n 1.No of zeroes no. :%d", countzeroes);
    printf("\n 2.No of positive no. :%d", countpos);
    printf("\n 3.No of negative no. :%d", countneg);
    return 0;



}
