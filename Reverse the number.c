#include<stdio.h>
int main()
{   int n,m,sum=0,i,a;
    printf("Enter Number to check:");
    scanf("%d", &n);
    a=n;
while(n>0)
{ m=n/10;
  sum=sum*10+m;
  n=n/10;
}
printf("The reverse number of given no. is %d",sum);
return 0;
}
