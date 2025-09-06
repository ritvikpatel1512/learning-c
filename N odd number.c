#include<stdio.h> //Odd no
int main()
{
int m,n,i;
printf("Enter no. :");
scanf("%d", &m);
for(i=1;i<=m;i++)
{
n=2*i-1;
printf("%d,", n);
}
return 0;
}
