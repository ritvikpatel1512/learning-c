#include <stdio.h>  //count no of digits integer
 int main()
{    int n,count=0,m=1;
     printf("Enter the no:");
     scanf("%d", &n);
if(n==0)
{
    printf("%d\n", m);
}
else
{ while(n>0)
{
  n=n/10;
count++;
}
}
printf("%d", count);
return 0;
 }
