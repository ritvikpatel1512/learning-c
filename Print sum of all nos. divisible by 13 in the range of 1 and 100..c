#include<stdio.h>
int main()
{   int n,m,count=0,i;
    printf("Enter 1st No: ");
    scanf("%d", &n);
    printf("Enter 2nd No: ");
    scanf("%d", &m);
  for(i=n;i<=m;i++)
  {
      if(i%13==0)
  {
  count=count+1;
  }


  }
  printf("Number divisible between given number are %d", count);
return 0;


}
