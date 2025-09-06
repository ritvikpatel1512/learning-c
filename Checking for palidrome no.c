#include<stdio.h>
int main()
{   int n,m,sum=0,i,a;
    printf("Enter Number to check:");
    scanf("%d", &n);
    a=n;
for(i=0;i<=n;i++)
{ m=n/10;
  sum=sum*10+m;
  n=n/10;

}
if(sum==a)
{
    printf("Number is palidrome");
}
else
{
    printf("Number is not palidrome");
}
return 0;

}
