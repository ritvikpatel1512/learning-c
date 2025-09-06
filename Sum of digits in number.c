#include<stdio.h>  //Sum of digits in number
int main()
{
    int n,m,sum=0;
    printf("Enter the no:");
     scanf("%d", &n);
     while(n>0)
     {
      m=n%10;
     sum=sum+m;
     n=n/10;

     }
     printf("Sum of digits is %d\n", sum);
     return 0;

}
